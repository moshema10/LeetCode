#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>

#include <algorithm>

using namespace std;

int maxArea(vector<int>& height) 
{
    int start, end,tempMax = 0,Max = 0;
    start = 0;
    end = height.size()-1;
    while(start < end)
    { 
        
        if(height[start]<height[end])
        {
            tempMax = height[start] * (end-start);
            start++;
        }
        else
        {
            tempMax = height[end] * (end-start);
            end--;
        }
        Max = max(Max,tempMax);

    }
    return Max;
}

int main()
{
    vector<int> h = {1,1};
    cout << "Max Water: " << maxArea(h);

    return 0;
}