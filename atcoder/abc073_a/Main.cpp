// https://atcoder.jp/contests/abc073/tasks/abc073_a

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

  r = (int)(n / 10) == 9 || n % 10 == 9 ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
