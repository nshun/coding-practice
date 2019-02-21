// https://atcoder.jp/contests/abc090/tasks/abc090_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string s, r = "";

  for (size_t i = 0; i < 3; i++)
  {
    cin >> s;
    r += s[i];
  }

  cout << r << '\n';

  return 0;
}
