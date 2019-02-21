// https://beta.atcoder.jp/contests/abc050/tasks/abc050_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, r;
  char op;

  cin >> a >> op >> b;

  r = op == '+' ? a + b : a - b;

  cout << r << "\n";

  return 0;
}
