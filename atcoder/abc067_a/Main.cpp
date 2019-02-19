// https://atcoder.jp/contests/

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b;
  string r;

  cin >> a >> b;

  r = (a % 3) * (b % 3) * ((a + b) % 3) == 0 ? "Possible" : "Impossible";

  cout << r << '\n';

  return 0;
}
