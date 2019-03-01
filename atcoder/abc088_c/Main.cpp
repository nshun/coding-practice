// https://atcoder.jp/contests/abc088/tasks/abc088_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int c[9];

bool chk(int s)
{
  int t = c[s] - c[s + 1];
  if (t != c[s + 3] - c[s + 4] || t != c[s + 6] - c[s + 7])
    return false;

  s *= 3;
  t = c[s] - c[s + 3];
  if (t != c[s + 1] - c[s + 4] || t != c[s + 2] - c[s + 5])
    return false;

  return true;
}
int main()
{
  REP(i, 9)
  {
    cin >> c[i];
  }

  cout << (chk(0) && chk(1) ? "Yes" : "No") << '\n';

  return 0;
}
