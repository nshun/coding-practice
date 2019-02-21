// https://atcoder.jp/contests/abc088/tasks/abc088_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, a;
  string r;

  cin >> n >> a;

  r = (n % 500) - a <= 0 ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
