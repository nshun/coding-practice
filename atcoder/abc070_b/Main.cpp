// https://atcoder.jp/contests/abc070/tasks/abc070_b

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

  int a, b, c, d, s = 0;

  cin >> a >> b >> c >> d;

  FOR(i, min(a, c), max(b, d))
  {
    if (a <= i && i < b && c <= i && i < d)
      s++;
  }

  cout << s << '\n';

  return 0;
}
