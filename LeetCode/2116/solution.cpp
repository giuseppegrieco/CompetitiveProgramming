#include <bits/stdc++.h>
#include <stack>

using namespace std;

class Solution
{
public:
  bool canBeValid(string s, string locked)
  {
    uint n = s.size();
    if (n % 2 != 0)
    {
      return false;
    }

    stack<uint> open;
    stack<uint> free;
    for (uint i = 0; i < n; i++)
    {
      if (locked[i] == '0')
      {
        free.push(i);
      }
      else if (s[i] == '(')
      {
        open.push(i);
      }
      else
      {
        if (!open.empty())
        {
          open.pop();
        }
        else if (!free.empty())
        {
          free.pop();
        }
        else
        {
          return false;
        }
      }
    }

    while (!open.empty())
    {
      if (free.empty() || open.top() >= free.top())
      {
        return false;
      }
      open.pop();
      free.pop();
    }

    return true;
  }
};