// https://atcoder.jp/contests/abc092/tasks/abc092_a

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c, d;

  cin >> a >> b >> c >> d;

  cout << min(a, b) + min(c, d) << '\n';

  return 0;
}
