// https://atcoder.jp/contests/abc054/tasks/abc054_a

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

  r = a == b ? "Draw" : (a + 11) % 13 < (b + 11) % 13 ? "Bob" : "Alice";

  cout << r << "\n";

  return 0;
}
