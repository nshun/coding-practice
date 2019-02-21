// https://atcoder.jp/contests/abc043/tasks/abc043_b

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string s, ro = "";
  vector<char> r;

  cin >> s;

  for (size_t i = 0; i < s.length(); i++)
  {
    if (s[i] != 'B')
      r.push_back(s[i]);
    else if (0 < r.size())
      r.pop_back();
  }

  for (char c : r)
  {
    ro += c;
  }

  cout << ro << '\n';

  return 0;
}
