#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
    vector<vector<int>> result;
    
    sort(nums.begin(),nums.end());
    int n = nums.size();

    for(int i = 0; i < n-2; i++)
    {
        int L = i + 1;
        int R = n - 1;

        if(i > 0 && nums[i] == nums[i-1])
            continue;

        while(L < R)
        {
            int sum = nums[L] + nums[R] + nums[i];
            if(sum == 0)
            {
                result.push_back({nums[i],nums[L],nums[R]});
                while(L < R && nums[L] == nums[L+1]) L++;
                while(L < R && nums[R] == nums[R-1]) R--;
                L++;
                R--;
            }
            else if(sum < 0)
            {
                L++;
            }
            else
            {
                R--;
            }
        }
        

    }


    return result;
}



int main()
{
    vector<int> num = {-1,0,1,2,-1,4};
    vector<vector<int>> result = threeSum(num);
    for(auto i : result)
        cout << i[0] << "," << i[1] << "," << i[2] << endl;
    

    return 0;
}