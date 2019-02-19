// https://atcoder.jp/contests/abc065/tasks/abc065_a

#include <iostream>
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

  r = b <= a ? "delicious" : b <= a + x ? "safe" : "dangerous";

  cout << r << '\n';

  return 0;
}
