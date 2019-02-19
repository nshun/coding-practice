// https://atcoder.jp/contests/abc044/tasks/abc044_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, k, x, y, total = 0;

  cin >> n >> k >> x >> y;

  if (k < n)
    total = k * x + (n - k) * y;
  else
    total = n * x;

  cout << total << "\n";

  return 0;
}
