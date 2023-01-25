#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <queue>
#include <vector>
#include <numeric>

using namespace std;


int longestConsecutive(vector<int>& nums) 
{
    unordered_set<int> set(nums.begin(),nums.end());
    int longestStreak = 0;
    int currentStreak = 0;
    for(int num : nums)
    {
        
        if(set.find(num-1) == set.end())
        {
            int currNum = num;
            currentStreak = 1;
            while(set.find(currNum+1) != set.end())
            {
                currNum++;
                currentStreak++;
            }
        }
        longestStreak = max(longestStreak,currentStreak);
    }
    return longestStreak;
}

int main()
{
    vector<int> number = {100,4,200,1,3,2};
    cout << "Answer: " << longestConsecutive(number) << endl;
    return 0;
}