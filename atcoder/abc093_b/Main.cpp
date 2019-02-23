// https://atcoder.jp/contests/abc093/tasks/abc093_b

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

  int a, b, k;
  set<int> r;

  cin >> a >> b >> k;

  FOR(i, a, min(a + k, b + 1))
  {
    r.insert(i);
  }
  FOR(i, max(a, b - k + 1), b + 1)
  {
    r.insert(i);
  }

  for (auto &rr : r)
  {
    cout << rr << '\n';
  }

  return 0;
}
