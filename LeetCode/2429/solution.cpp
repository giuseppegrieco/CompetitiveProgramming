#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int minimizeXor(int num1, int num2)
  {
    int ans = num1;

    int setBitsNum2 = __builtin_popcount(num2);
    int setBitsAns = __builtin_popcount(ans);

    int i = 0;

    while (setBitsAns < setBitsNum2)
    {
      if (!(ans & (1 << i)))
      {
        ans |= (1 << i);
        setBitsAns++;
      }
      i++;
    }

    while (setBitsAns > setBitsNum2)
    {
      if (ans & (1 << i))
      {
        ans &= ~(1 << i);
        setBitsAns--;
      }
      i++;
    }

    return ans;
  }
};