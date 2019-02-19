// https://atcoder.jp/contests/abc077/tasks/abc077_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string a, b, c = "", d = "", r;

  cin >> a >> b;

  c += b[2];
  c += b[1];
  c += b[0];
  d += a[2];
  d += a[1];
  d += a[0];

  r = a == c && b == d ? "YES" : "NO";

  cout << r << '\n';

  return 0;
}
