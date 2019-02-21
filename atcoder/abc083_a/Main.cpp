// https://atcoder.jp/contests/abc083/tasks/abc083_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c, d;
  string r;

  cin >> a >> b >> c >> d;

  r = a + b == c + d ? "Balanced" : a + b < c + d ? "Right" : "Left";

  cout << r << '\n';

  return 0;
}
