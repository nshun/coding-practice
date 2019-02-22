// https://atcoder.jp/contests/abc058/tasks/abc058_b

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

  string o, e, r;

  cin >> o >> e;

  ll len = o.length();
  ll len2 = e.length();
  REP(i, len)
  {
    r += o[i];
    if (i <= len2 - 1)
      r += e[i];
  }

  cout << r << '\n';

  return 0;
}
