// https://atcoder.jp/contests/abc057/tasks/abc057_b

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

  ll n, m;
  vector<ll> a, b, c, d;

  cin >> n >> m;

  REP(i, n)
  {
    ll ai, bi;
    cin >> ai >> bi;
    a.push_back(ai);
    b.push_back(bi);
  }

  REP(i, m)
  {
    ll ci, di;
    cin >> ci >> di;
    c.push_back(ci);
    d.push_back(di);
  }

  REP(i, n)
  {
    ll xm = INF, im;
    REP(j, m)
    {
      ll x = abs(a[i] - c[j]) + abs(b[i] - d[j]);
      if (x < xm)
      {
        xm = x;
        im = j;
      }
    }
    cout << im + 1 << '\n';
  }

  return 0;
}
