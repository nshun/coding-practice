// https://atcoder.jp/contests/abc080/tasks/abc080_a

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, a, b;

  cin >> n >> a >> b;

  cout << min(a * n, b) << '\n';

  return 0;
}
