// https://atcoder.jp/contests/abc091/tasks/abc091_a

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

  r = a + b < c ? "No" : "Yes";

  cout << r << '\n';

  return 0;
}
