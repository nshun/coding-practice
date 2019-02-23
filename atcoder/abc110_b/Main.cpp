// https://atcoder.jp/contests/abc110/tasks/abc110_b

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

  int n, m, x, y;

  cin >> n >> m >> x >> y;

  int xx = x, yy = y, t;

  REP(i, n)
  {
    cin >> t;
    xx = max(xx, t);
  }

  REP(i, m)
  {
    cin >> t;
    yy = min(yy, t);
  }

  string r = xx < yy ? "No War" : "War";

  cout << r << '\n';

  return 0;
}
