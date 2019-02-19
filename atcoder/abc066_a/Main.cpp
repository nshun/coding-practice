// https://atcoder.jp/contests/abc066/tasks/abc066_a

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int p[3];

  cin >> p[0] >> p[1] >> p[2];

  sort(p, p + 3);

  cout << p[0] + p[1] << '\n';

  return 0;
}
