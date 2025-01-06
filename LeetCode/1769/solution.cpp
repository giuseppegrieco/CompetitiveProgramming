#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  // O(n)
  vector<int> minOperations(string boxes)
  {
    vector<int> ans(boxes.length(), 0);
    vector<int> left(boxes.length(), 0);
    vector<int> right(boxes.length(), 0);

    for (uint l = 1, r = boxes.size() - 2; l < boxes.size(); l++, r--)
    {
      right[r] = (right[r + 1]) + (boxes[r + 1] == '1' ? 1 : 0);
      left[l] = (left[l - 1]) + (boxes[l - 1] == '1' ? 1 : 0);
    }

    for (uint l = 1, r = boxes.size() - 2; l < boxes.size(); l++, r--)
    {
      left[l] += left[l - 1];
      right[r] += right[r + 1];
    }

    for (uint i = 0; i < boxes.size(); i++)
    {
      ans[i] = left[i] + right[i];
    }
    return ans;
  }

  // O(nˆ2)
  // vector<int> minOperations(string boxes)
  // {
  //   vector<int> ans(boxes.length(), 0);

  //   for (uint i = 0, j = boxes.size() - 2; i < boxes.size(); i++)
  //   {
  //     for (uint j = 0; j < boxes.size(); j++)
  //     {
  //       ans[i] += boxes[j] == '1' ? i >= j ? i - j : (i - j) * -1 : 0;
  //     }
  //   }
  //   return ans;
  // }
};