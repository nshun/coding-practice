// https://atcoder.jp/contests/abc044/tasks/abc044_b

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Magic word */
  cin.tie(0);
  ios::sync_with_stdio(false);
  /* ---------- */

  string w, r = "Yes";
  char n;
  int cnt;

  cin >> w;

  sort(w.begin(), w.end());

  if (w.length() == 1)
    r = "No";

  for (char c : w)
  {
    if (n == c)
    {
      cnt++;
    }
    else
    {
      if (cnt % 2 == 1)
      {
        r = "No";
        break;
      }
      n = c;
      cnt = 1;
    }
  }

  cout << r << '\n';

  return 0;
}
