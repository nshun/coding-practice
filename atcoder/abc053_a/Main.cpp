// https://beta.atcoder.jp/contests/abc053/tasks/abc053_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int x;
  string r;

  cin >> x;

  r = x < 1200 ? "ABC" : "ARC";

  cout << r << "\n";

  return 0;
}
