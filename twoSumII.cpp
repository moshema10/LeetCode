
#include <iostream>
#include <vector>


using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
    vector<int> answer;
    int low = 0;
    int high = numbers.size()-1;
    while(low < high)
    {
        if(numbers[low]+numbers[high] == target)
        {
            answer.push_back(low+1);
            answer.push_back(high+1);
            return answer;
        }
        else if(numbers[low]+numbers[high] > target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return answer;    
}