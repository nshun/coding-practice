// https://atcoder.jp/contests/abc047/tasks/abc047_a

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c;

  cin >> a >> b >> c;

  int maximum = max({a, b, c});
  string result = maximum == a + b + c - maximum ? "Yes" : "No";

  cout << result << "\n";

  return 0;
}
