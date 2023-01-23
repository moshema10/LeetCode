#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool containsDuplicate(int nums[],int size)
{
    bool result = false;
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(nums[i] == nums[j])
            {
                result = true;
                break;
            }
        }
    }
    return result;
}

bool containsDuplicate2(const int nums[],int size)
{
    unordered_set<int> set;
    for(int i = 0; i < size;i++)
    {
        set.insert(nums[i]);
    }
    return (size > set.size());
    
}

int main()
{
    int array[4] = {1,2,3,4};
    cout << "Result : " << containsDuplicate2(array,4) << endl;

    return 0;
} 