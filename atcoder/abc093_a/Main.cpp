// https://atcoder.jp/contests/abc093/tasks/abc093_a

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string s, r;

  cin >> s;

  sort(s.begin(), s.end());

  r = "abc" == s ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
