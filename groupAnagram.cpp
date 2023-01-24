#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <vector>

using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    unordered_map<string,vector<string>> map;
    vector<vector<string>> result;
    for(auto str : strs)
    {
        string key = str;
        sort(key.begin(),key.end());
        map[key].push_back(str);
    }
    for(auto v : map)
    {
        result.push_back(v.second);
    }
    return result;
}

int main()
{


    return 0;
}