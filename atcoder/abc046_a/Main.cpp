// https://beta.atcoder.jp/contests/abc046/tasks/abc046_a

#include <iostream>
#include <set>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c;
  set<int> s;

  cin >> a >> b >> c;

  s.insert(a);
  s.insert(b);
  s.insert(c);

  cout << s.size() << "\n";

  return 0;
}
