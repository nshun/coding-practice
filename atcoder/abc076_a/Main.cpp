// https://atcoder.jp/contests/abc076/tasks/abc076_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int r, g;

  cin >> r >> g;

  cout << r + (g - r) * 2 << '\n';

  return 0;
}
