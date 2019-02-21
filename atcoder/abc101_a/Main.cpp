// https://atcoder.jp/contests/abc101/tasks/abc101_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string s;
  int r = 0;

  cin >> s;

  for (size_t i = 0; i < 4; i++)
  {
    r += s[i] == '+' ? 1 : -1;
  }

  cout << r << '\n';

  return 0;
}
