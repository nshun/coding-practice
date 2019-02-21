// https://atcoder.jp/contests/abc118/tasks/abc118_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b;

  cin >> a >> b;

  cout << (b % a == 0 ? b + a : b - a) << '\n';

  return 0;
}
