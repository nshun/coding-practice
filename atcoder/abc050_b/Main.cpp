// https://atcoder.jp/contests/abc050/tasks/abc050_b

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

  int n, m, ti, pi, xi;
  vector<int> t, p, x;

  cin >> n;
  REP(i, n)
  {
    cin >> ti;
    t.push_back(ti);
  }
  cin >> m;
  REP(i, m)
  {
    cin >> pi >> xi;
    p.push_back(pi);
    x.push_back(xi);
  }

  REP(i, m)
  {
    int sum = 0;
    REP(j, n)
    {
      if (j == p[i] - 1)
        sum += x[i];
      else
        sum += t[j];
    }
    cout << sum << '\n';
  }

  return 0;
}
