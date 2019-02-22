// https://atcoder.jp/contests/abc047/tasks/abc047_b

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int w, h, n, x, y, a, s,
      xs[2] = {0, 100}, ys[2] = {0, 100};

  cin >> w >> h >> n;

  xs[1] = w;
  ys[1] = h;

  for (size_t i = 0; i < n; i++)
  {
    cin >> x >> y >> a;
    if (a == 1 && xs[0] < x)
      xs[0] = x;
    else if (a == 2 && x < xs[1])
      xs[1] = x;
    else if (a == 3 && ys[0] < y)
      ys[0] = y;
    else if (a == 4 && y < ys[1])
      ys[1] = y;
  }

  s = max(0, xs[1] - xs[0]) * max(0, ys[1] - ys[0]);

  cout << s << '\n';

  return 0;
}
