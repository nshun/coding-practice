// https://atcoder.jp/contests/abc094/tasks/abc094_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, x;
  string r;

  cin >> a >> b >> x;

  r = x <= a + b && a <= x ? "YES" : "NO";

  cout << r << '\n';

  return 0;
}
