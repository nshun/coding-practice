// https://atcoder.jp/contests/abc111/tasks/abc111_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string n;

  cin >> n;

  for (size_t i = 0; i < 3; i++)
  {
    if (n[i] == '1')
      n[i] = '9';
    else
      n[i] = '1';
  }

  cout << n << '\n';

  return 0;
}
