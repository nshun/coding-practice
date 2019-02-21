// https://atcoder.jp/contests/abc097/tasks/abc097_a

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
  string r;

  cin >> a >> b >> c >> d;

  r = d < abs(a - c) && (d < abs(a - b) || d < abs(b - c)) ? "No" : "Yes";

  cout << r << '\n';

  return 0;
}
