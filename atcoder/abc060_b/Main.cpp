// https://atcoder.jp/contests/abc060/tasks/abc060_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int a, b, c, d = 0;
  set<int> mod;
  string r;

  cin >> a >> b >> c;

  while (true)
  {
    d += a;
    d = d % b;
    if (d == c)
    {
      r = "YES";
      break;
    }
    else
    {
      int ls = mod.size();
      mod.insert(d);
      if (ls == mod.size())
      {
        r = "NO";
        break;
      }
    }
  }

  cout << r << '\n';

  return 0;
}
