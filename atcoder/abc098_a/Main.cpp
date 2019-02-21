// https://atcoder.jp/contests/abc098/tasks/abc098_a

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b;

  cin >> a >> b;

  cout << max(max(a + b, a - b), a * b) << '\n';

  return 0;
}
