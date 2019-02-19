// https://atcoder.jp/contests/abc042/tasks/abc042_a

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a[3];

  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);

  string result = a[0] == 5 && a[1] == 5 && a[2] == 7 ? "YES" : "NO";

  cout << result << "\n";

  return 0;
}
