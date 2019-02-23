// https://atcoder.jp/contests/abc095/tasks/abc095_b

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

  int n, x, s = 0, m = INF;

  cin >> n >> x;
  REP(i, n)
  {
    int mi;
    cin >> mi;
    s++;
    x -= mi;
    if (mi < m)
      m = mi;
  }

  s += x / m;

  cout << s << '\n';

  return 0;
}
