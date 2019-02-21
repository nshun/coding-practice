// https://atcoder.jp/contests/abc042/tasks/abc042_b

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  int n, l, cnt = 0;
  string in, r = "";
  vector<string> ss;

  cin >> n >> l;

  for (size_t i = 0; i < n; i++)
  {
    cin >> in;
    ss.push_back(in);
  }

  sort(ss.begin(), ss.end());

  for (size_t i = 0; i < n; i++)
  {
    r += ss[i];
  }

  cout << r << '\n';

  return 0;
}
