#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int waysToSplitArray(vector<int> &nums)
  {
    uint n = nums.size();
    vector<long> pSum(n);
    pSum[0] = nums[0];
    for (uint i = 1; i < n; i++)
    {
      pSum[i] = pSum[i - 1] + nums[i];
    }

    int ans = 0;
    for (uint i = 0; i < n - 1; i++)
    {
      if (pSum[i] >= pSum[n - 1] - pSum[i])
      {
        ans++;
      }
    }

    return ans;
  }
};