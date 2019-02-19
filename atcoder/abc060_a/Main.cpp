// https://atcoder.jp/contests/abc060/tasks/abc060_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string a, b, c, r;

  cin >> a >> b >> c;

  r = a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0] ? "YES" : "NO";

  cout << r << "\n";

  return 0;
}
