
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <vector>

using namespace std;

bool isPalindrome(string s) 
{
    string newStr;
    for(auto str : s)
    {
        if(isalnum(str))
        {
            newStr += toupper(str);
        }
    }
    string reverseStr = newStr;
    reverse(reverseStr.begin(),reverseStr.end());
    return newStr == reverseStr;


}