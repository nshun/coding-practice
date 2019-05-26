// https://atcoder.jp/contests/abc128/tasks/abc128_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;

int N, M, k, t, p[10], result = 0;
bool s[10][10];

bool checkLL(bool on[10])
{
  REP(i, M)
  {
    int cnt = 0;
    REP(j, N)
    {
      if (on[j] && s[i][j])
        cnt++;
    }
    if (cnt % 2 != p[i])
      return false;
  }
  return true;
}

int main()
{
  cin >> N >> M;
  REP(i, M)
  {
    cin >> k;
    REP(j, k)
    {
      cin >> t;
      s[i][t - 1] = true;
    }
  }
  REP(i, M)
  {
    cin >> p[i];
  }
  REP(bit, 1 << N)
  {
    bool on[10];
    REP(i, N)
    {
      on[i] = bit & (1 << i);
    }
    if (checkLL(on))
      result++;
  }
  cout << result << '\n';
  return 0;
}
