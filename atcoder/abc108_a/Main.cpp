// https://atcoder.jp/contests/abc108/tasks/abc108_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int k, e, o;

  cin >> k;

  e = k / 2;
  o = (k + 1) / 2;

  cout << e * o << '\n';

  return 0;
}
