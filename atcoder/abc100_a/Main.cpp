// https://atcoder.jp/contests/abc100/tasks/abc100_a

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

  r = a <= 8 && b <= 8 ? "Yay!" : ":(";

  cout << r << '\n';

  return 0;
}
