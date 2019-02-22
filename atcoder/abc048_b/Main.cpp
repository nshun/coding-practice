// https://atcoder.jp/contests/abc048/tasks/abc048_b

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  long long a, b, x;

  cin >> a >> b >> x;

  cout << max(0ll, ((b - b % x + x) - a) / x) << '\n';

  return 0;
}
