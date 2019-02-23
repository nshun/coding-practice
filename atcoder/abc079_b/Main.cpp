// https://atcoder.jp/contests/abc079/tasks/abc079_b

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

  ll n;

  cin >> n;

  ll a = 2, b = 1, c = 3;

  if (n == 1)
    c = 1;
  else
  {
    REP(i, n - 1)
    {
      c = a + b;
      a = b;
      b = c;
    }
  }

  cout << c << '\n';

  return 0;
}
