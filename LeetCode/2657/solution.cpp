#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
  vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
  {
    int n = A.size();

    vector<int> ans(n);
    vector<int> f(n, 0);

    uint count = 0;
    for (int i = 0; i < n; i++)
    {
        f[A[i] - 1]++;
        if (f[A[i] - 1] == 2) {
            count++;
        }
        f[B[i] - 1]++;
        if (f[B[i] - 1] == 2) {
            count++;
        }
        ans[i] = count;
    }

    return ans;
  }
};