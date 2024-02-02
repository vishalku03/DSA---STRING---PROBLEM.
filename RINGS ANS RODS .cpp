#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     int countPoints(string rings)
     {
          unordered_map<int, set<char>> m;
          for (int i = 0; i < rings.size(); i += 2)
          {
               // m[rings[i+1]-'0'] -> converts char to integer
               m[rings[i + 1] - '0'].insert(rings[i]);
          }
          int count = 0;
          for (auto it : m)
          {
               if (it.second.size() == 3)
                    count++;
          }
          return count;
     }
};

// LEETCODE PROBLEM -  2103