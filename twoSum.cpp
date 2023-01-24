#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <iterator>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{ 
    unordered_map<int, int> map;
    vector<int> result;
    for(int i = 0; i < nums.size(); i++)
    {
        //value : index pair
        
        if(map.count(target - nums[i]))
        {
            result.push_back(i);
            result.push_back(map[target-nums[i]]);
            return result;

        }
        map[nums[i]] = i;
    }
    return result;

}

int main()
{ 


    return 0;
}