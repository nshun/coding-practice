// https://atcoder.jp/contests/abc102/tasks/abc102_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, r;

  cin >> n;

  r = n % 2 == 0 ? n : 2 * n;

  cout << r << '\n';

  return 0;
}
