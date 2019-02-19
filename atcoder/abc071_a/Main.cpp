// https://atcoder.jp/contests/abc071/tasks/abc071_a

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int x, a, b;
  string r;

  cin >> x >> a >> b;

  r = abs(x - a) < abs(x - b) ? 'A' : 'B';

  cout << r << '\n';

  return 0;
}
