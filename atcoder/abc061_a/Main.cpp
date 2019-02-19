// https://atcoder.jp/contests/abc061/tasks/abc061_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c;
  string r;

  cin >> a >> b >> c;

  r = a <= c && c <= b ? "Yes" : "No";

  cout << r << "\n";

  return 0;
}
