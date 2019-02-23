// https://atcoder.jp/contests/abc080/tasks/abc080_b

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

  ll n, t;

  cin >> n;
  t = n;

  int sum = 0;
  while (0 < t)
  {
    sum += t % 10;
    t /= 10;
  }

  string r = n % sum == 0 ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
