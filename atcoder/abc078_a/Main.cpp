// https://atcoder.jp/contests/abc078/tasks/abc078_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  char x, y, r;
  string p = "ABCDEF";

  cin >> x >> y;

  r = x == y ? '=' : p.find(x) < p.find(y) ? '<' : '>';

  cout << r << '\n';

  return 0;
}
