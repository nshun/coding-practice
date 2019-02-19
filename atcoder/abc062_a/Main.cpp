// https://atcoder.jp/contests/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, ag, bg, gc = 0;
  int g[] = {1, 3, 5, 7, 8, 10, 12,
             4, 6, 9, 11,
             2};

  string r;

  cin >> a >> b;

  for (size_t i = 0; i < 12; i++)
  {
    if (i == 7 || i == 11)
      gc++;
    if (a == g[i])
      ag = gc;
    if (b == g[i])
      bg = gc;
  }

  r = ag == bg ? "Yes" : "No";

  cout << r << "\n";

  return 0;
}
