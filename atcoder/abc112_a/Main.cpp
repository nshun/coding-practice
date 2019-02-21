// https://atcoder.jp/contests/abc112/tasks/abc112_a

#include <iostream>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n;

  cin >> n;

  if (n == 1)
    cout << "Hello World" << '\n';
  else
  {
    int a, b;
    cin >> a >> b;
    cout << a + b << '\n';
  }

  return 0;
}
