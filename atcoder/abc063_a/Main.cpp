// https://atcoder.jp/contests/abc063/tasks/abc063_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b;

  cin >> a >> b;

  if (9 < a + b)
    cout << "error" << '\n';
  else
    cout << a + b << '\n';

  return 0;
}
