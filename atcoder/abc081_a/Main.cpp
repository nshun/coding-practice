// https://atcoder.jp/contests/abc081/tasks/abc081_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int cnt;
  string s;

  cin >> s;

  for (size_t i = 0; i < s.length(); i++)
  {
    if (s[i] == '1')
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
