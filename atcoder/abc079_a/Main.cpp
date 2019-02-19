// https://atcoder.jp/contests/abc079/tasks/abc079_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string n, r;

  cin >> n;

  r = n[1] == n[2] && (n[0] == n[1] || n[2] == n[3]) ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
