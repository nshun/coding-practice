// https://atcoder.jp/contests/abc095/tasks/abc095_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string s;
  int r = 700;

  cin >> s;

  for (size_t i = 0; i < s.length(); i++)
  {
    if (s[i] == 'o')
      r += 100;
  }

  cout << r << '\n';

  return 0;
}
