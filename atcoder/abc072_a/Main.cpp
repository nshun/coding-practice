// https://atcoder.jp/contests/abc072/tasks/abc072_a

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int x, t;

  cin >> x >> t;

  cout << max(0, x - t) << '\n';

  return 0;
}
