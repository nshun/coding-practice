// https://atcoder.jp/contests/abc076/tasks/abc076_b

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

  int n, k, c = 1;

  cin >> n >> k;

  REP(i, n)
  {
    if (c * 2 < c + k)
      c *= 2;
    else
      c += k;
  }

  cout << c << '\n';

  return 0;
}
