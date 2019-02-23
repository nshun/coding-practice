// https://atcoder.jp/contests/

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

  int n, t, a, m;

  cin >> n >> t >> a;

  double h = INF;
  REP(i, n)
  {
    int hi;
    cin >> hi;

    double nx = abs(t - 0.006 * hi - a);
    if (nx < h)
    {
      h = nx;
      m = i + 1;
    }
  }

  cout << m << '\n';

  return 0;
}
