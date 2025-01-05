#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string convert(string s, int numRows)
  {
    if(numRows == 1) {
      return s;
    }
    vector<string> arr(numRows, "");
    int l = 0;
    int u = numRows - 1;
    for (uint i = 0; i < s.size(); i++)
    {
      if (l < numRows)
      {
        arr[l] += s[i];
        l++;
      }
      else
      {
        arr[u - 1] += s[i];
        u--;
        if (u == 0)
        {
          u = numRows - 1;
          l = 1;
        }
      }
    }

    std::string ans;
    for (const auto &str : arr)
    {
      ans += str;
    }

    return ans;
  }
};