// https://atcoder.jp/contests/abc056/tasks/abc056_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  char a, b, r;

  cin >> a >> b;

  r = a == b ? 'H' : 'D';

  cout << r << "\n";
  return 0;
}
