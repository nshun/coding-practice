// https://atcoder.jp/contests/abc083/tasks/abc083_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int n, a, b;

  cin >> n >> a >> b;

  ll sum = 0;

  REP(i, n + 1)
  {
    int t = i, s = 0;
    while (0 < t)
    {
      s += t % 10;
      t /= 10;
    }
    if (a <= s && s <= b)
      sum += i;
  }

  cout << sum << '\n';

  return 0;
}
