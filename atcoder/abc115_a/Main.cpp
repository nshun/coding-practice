// https://atcoder.jp/contests/abc115/tasks/abc115_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int d;
  string r[] = {
      "Christmas Eve Eve Eve",
      "Christmas Eve Eve",
      "Christmas Eve",
      "Christmas"};

  cin >> d;

  cout << r[d - 22] << '\n';

  return 0;
}
