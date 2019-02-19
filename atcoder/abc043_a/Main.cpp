// https://atcoder.jp/contests/abc043/tasks/abc043_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, sum;

  cin >> n;

  sum = n * (n + 1) / 2;

  cout << sum << "\n";

  return 0;
}
