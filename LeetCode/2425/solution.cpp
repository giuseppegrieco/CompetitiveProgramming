#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int xorAllNums(vector<int> &nums1, vector<int> &nums2)
  {
    uint n1 = nums1.size(), n2 = nums2.size();
    unordered_map<int, long> frequencies;

    for (uint num : nums1)
    {
      frequencies[num] += n2;
    }

    for (uint num : nums2)
    {
      frequencies[num] += n1;
    }

    uint ans = 0;
    for (auto &[num, frequency] : frequencies)
    {
      if (frequency % 2 == 1)
      {
        ans ^= num;
      }
    }
    return ans;
  }
};