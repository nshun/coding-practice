// https://atcoder.jp/contests/abc094/tasks/abc094_b

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

  int n, m, x, c1 = 0, c2 = 0;

  cin >> n >> m >> x;

  REP(i, m)
  {
    int ai;
    cin >> ai;
    if (ai < x)
      c1++;
    else
      c2++;
  }

  cout << min(c1, c2) << '\n';

  return 0;
}
