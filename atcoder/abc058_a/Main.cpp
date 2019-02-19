// https://atcoder.jp/contests/abc058/tasks/abc058_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c;
  string r;

  cin >> a >> b >> c;

  r = b - a == c - b ? "YES" : "NO";

  cout << r << "\n";

  return 0;
}
