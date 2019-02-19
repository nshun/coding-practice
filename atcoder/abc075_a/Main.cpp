// https://atcoder.jp/contests/abc075/tasks/abc075_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c;

  cin >> a >> b >> c;

  cout << (a == b ? c : a == c ? b : a) << '\n';

  return 0;
}
