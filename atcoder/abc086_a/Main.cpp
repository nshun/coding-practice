// https://atcoder.jp/contests/abc086/tasks/abc086_a

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

  if (a % 2 == 0 || b % 2 == 0)
    cout << "Even" << '\n';
  else
    cout << "Odd" << '\n';

  return 0;
}
