// https://atcoder.jp/contests/abc104/tasks/abc104_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a;
  string r;

  cin >> a;

  r = a < 1200 ? "ABC" : a < 2800 ? "ARC" : "AGC";

  cout << r << '\n';

  return 0;
}
