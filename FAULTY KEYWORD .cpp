#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     string finalString(string s)
     {
          string str = "";
          for (auto &i : s)
          {
               if (i == 'i')
               {
                    reverse(str.begin(), str.end());
               }
               else
               {
                    str = str + i;
               }
          }
          return str;
     }
};

// LEETCODE QUESTION - 2810