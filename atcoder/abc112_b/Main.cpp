// https://atcoder.jp/contests/abc112/tasks/abc112_b

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

  int n, t;

  cin >> n >> t;

  int m = INF;
  REP(i, n)
  {
    int ci, ti;
    cin >> ci >> ti;
    if (ti <= t)
      m = min(m, ci);
  }

  string r = m == INF ? "TLE" : to_string(m);

  cout << r << '\n';

  return 0;
}
