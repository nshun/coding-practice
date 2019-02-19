// https://atcoder.jp/contests/abc048/tasks/abc048_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string a, b, c, i = "";
  cin >> a >> b >> c;

  i += a[0];
  i += b[0];
  i += c[0];

  cout << i << "\n";

  return 0;
}
