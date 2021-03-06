// https://atcoder.jp/contests/abc096/tasks/abc096_b

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

  int a, b, c, k;

  cin >> a >> b >> c >> k;

  ll m = a + b + c + max({a, b, c}) * (pow(2, k) - 1);

  cout << m << '\n';

  return 0;
}
