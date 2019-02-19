// https://atcoder.jp/contests/abc045/tasks/abc045_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, h, s;

  cin >> a >> b >> h;

  s = (a + b) * h / 2;

  cout << s << "\n";

  return 0;
}
