// https://atcoder.jp/contests/abc108/tasks/abc108_b

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

  int x1, x2, y1, y2;

  cin >> x1 >> y1 >> x2 >> y2;

  int dx = abs(x2 - x1),
      dy = abs(y2 - y1),
      x3, y3, x4, y4;

  if (x1 <= x2)
  {
    if (y1 <= y2)
    {
      x3 = x2 - dy;
      y3 = y2 + dx;
      x4 = x1 - dy;
      y4 = y1 + dx;
    }
    else
    {
      x3 = x2 + dy;
      y3 = y2 + dx;
      x4 = x1 + dy;
      y4 = y1 + dx;
    }
  }
  else
  {
    if (y1 <= y2)
    {
      x3 = x2 - dy;
      y3 = y2 - dx;
      x4 = x1 - dy;
      y4 = y1 - dx;
    }
    else
    {
      x3 = x2 + dy;
      y3 = y2 - dx;
      x4 = x1 + dy;
      y4 = y1 - dx;
    }
  }

  cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << '\n';

  return 0;
}
