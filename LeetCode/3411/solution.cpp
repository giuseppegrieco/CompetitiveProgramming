#include <bits/stdc++.h>
#include <numeric>

using namespace std;

class Solution
{
public:
  int maxLength(vector<int> &nums)
  {
    uint n = nums.size();

    int ans = 0;
    for (uint i = 0; i < n; i++)
    {
      long long g = nums[i];
      long long l = nums[i];
      long long p = nums[i];

      for (int j = i + 1; j < n; ++j)
      {
        p *= nums[j];
        g = gcd(g, nums[j]);
        l = lcm(l, nums[j]);

        if (p == l * g)
        {
          if (j - i + 1 > ans)
            ans = j - i + 1;
        }
        else
          break;
      }
    }
    return ans;
  }
};