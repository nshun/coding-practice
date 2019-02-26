// https://atcoder.jp/contests/abc051/tasks/abc051_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll sx, sy, tx, ty, dx, dy;
string p;

void move(string &p, char d, int c)
{
  REP(i, c)
  {
    p += d;
  }
}

int main()
{
  p = "";
  cin >> sx >> sy >> tx >> ty;

  dx = tx - sx;
  dy = ty - sy;
  move(p, 'U', dy);
  move(p, 'R', dx);
  move(p, 'D', dy);
  move(p, 'L', dx);

  p += 'L';
  move(p, 'U', dy + 1);
  move(p, 'R', dx + 1);
  p += "DR";
  move(p, 'D', dy + 1);
  move(p, 'L', dx + 1);
  p += 'U';

  cout << p << '\n';

  return 0;
}
