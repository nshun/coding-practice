// https://atcoder.jp/contests/abc103/tasks/abc103_a

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a[3];

  cin >> a[0] >> a[1] >> a[2];

  sort(a, a + 3);

  cout << a[2] - a[0] << '\n';

  return 0;
}
