// https://atcoder.jp/contests/abc087/tasks/abc087_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int x, a, b;

  cin >> x >> a >> b;

  cout << (x - a) % b << '\n';

  return 0;
}
