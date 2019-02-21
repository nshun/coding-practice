// https://atcoder.jp/contests/abc096/tasks/abc096_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, r;

  cin >> a >> b;

  r = a <= b ? a : a - 1;

  cout << r << '\n';

  return 0;
}
