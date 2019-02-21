// https://atcoder.jp/contests/abc099/tasks/abc099_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n;
  string r;

  cin >> n;

  r = n < 1000 ? "ABC" : "ABD";

  cout << r << '\n';

  return 0;
}
