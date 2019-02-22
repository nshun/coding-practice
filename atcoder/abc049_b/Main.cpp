// https://atcoder.jp/contests/abc049/tasks/abc049_b

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int h, w;
  string c;
  vector<string> r;

  cin >> h >> w;

  for (size_t i = 0; i < h; i++)
  {
    cin >> c;
    r.push_back(c);
    r.push_back(c);
  }

  for (auto o : r)
    cout << o << '\n';

  return 0;
}
