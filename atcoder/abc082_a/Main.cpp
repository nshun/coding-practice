// https://atcoder.jp/contests/abc082/tasks/abc082_a

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  double a, b;

  cin >> a >> b;

  cout << ceil((a + b) / 2) << '\n';

  return 0;
}
