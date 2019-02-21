// https://beta.atcoder.jp/contests/abc051/tasks/abc051_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string s;

  cin >> s;

  for (size_t i = 0; i < s.length(); i++)
  {
    if (s[i] == ',')
      s[i] = ' ';
  }

  cout << s << "\n";

  return 0;
}
