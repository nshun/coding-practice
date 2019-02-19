// https://atcoder.jp/contests/abc059/tasks/abc059_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string a, b, c, r = "";

  cin >> a >> b >> c;

  r += toupper(a[0]);
  r += toupper(b[0]);
  r += toupper(c[0]);

  cout << r << "\n";

  return 0;
}
