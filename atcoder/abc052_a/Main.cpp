// https://atcoder.jp/contests/abc052/tasks/abc052_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c, d, s;

  cin >> a >> b >> c >> d;

  s = a * b < c * d ? c * d : a * b;

  cout << s << "\n";

  return 0;
}
