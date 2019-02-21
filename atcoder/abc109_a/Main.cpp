// https://atcoder.jp/contests/abc109/tasks/abc109_a

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

  r = (a * b) % 2 ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
