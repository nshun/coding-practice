// https://atcoder.jp/contests/abc087/tasks/abc087_b

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

  int a, b, c, x;
  int cnt = 0;

  cin >> a >> b >> c >> x;

  REP(i, a + 1)
  {
    REP(j, b + 1)
    {
      int total = i * 500 + j * 100;
      REP(k, c + 1)
      {
        if (total + k * 50 == x)
          cnt++;
      }
    }
  }

  cout << cnt << '\n';

  return 0;
}
