// https://atcoder.jp/contests/abc105/tasks/abc105_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, k, r;

  cin >> n >> k;

  r = n % k == 0 ? 0 : 1;

  cout << r << '\n';

  return 0;
}
