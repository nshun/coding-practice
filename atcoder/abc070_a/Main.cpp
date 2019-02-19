// https://atcoder.jp/contests/abc070/tasks/abc070_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string n, inv_n = "", r;

  cin >> n;

  inv_n += n[2];
  inv_n += n[1];
  inv_n += n[0];

  r = n == inv_n ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
