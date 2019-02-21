// https://atcoder.jp/contests/abc045/tasks/abc045_b

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n = 0, c[3] = {0, 0, 0};
  string p = "abc", P = "ABC", s[3];

  cin >> s[0] >> s[1] >> s[2];

  while (true)
  {
    if (c[n] == s[n].length())
      break;
    n = p.find(s[n][c[n]++]);
  }

  string r = P.substr(n, 1);

  cout << r << '\n';

  return 0;
}
