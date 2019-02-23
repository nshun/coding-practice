// https://atcoder.jp/contests/abc074/tasks/abc074_b

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

  int n, k;
  vector<int> x;

  cin >> n >> k;

  REP(i, n)
  {
    int xi;
    cin >> xi;
    x.push_back(xi);
  }

  int sum = 0;
  REP(i, n)
  {
    sum += 2 * min(x[i], k - x[i]);
  }

  cout << sum << '\n';

  return 0;
}
