// https://atcoder.jp/contests/abc046/tasks/abc046_b

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, k;
  long r;

  cin >> n >> k;

  r = k;

  for (size_t i = 1; i < n; i++)
  {
    r *= (k - 1);
  }

  cout << r << '\n';

  return 0;
}
