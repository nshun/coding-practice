// https://atcoder.jp/contests/abc055/tasks/abc055_b

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

  int n;
  ll p = 1;

  cin >> n;

  REP(i, n)
  {
    p *= i + 1;
    p = p % (ll)(pow(10, 9) + 7);
  }

  cout << p << '\n';

  return 0;
}
