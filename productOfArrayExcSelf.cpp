#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <iterator>
#include <queue>
#include <vector>

using namespace std;


vector<int> productExceptSelf(vector<int>& nums)
{
    vector<int> answer(nums.size(),1);
    int pre = 1;
    int post = 1;
    for(int i = 0; i < nums.size(); i++)
    {
        answer[i] = pre;
        pre = pre * nums[i];
    }
    for(int i = nums.size() - 1 ; i >= 0; i--)
    {
        answer[i] = answer[i] * post;
        post = post * nums[i];
    }
    return answer;
}


int main()
{

    return 0;
}