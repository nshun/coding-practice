// https://atcoder.jp/contests/abc099/tasks/abc099_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N;

ll cc(ll cn, ll r)
{
  if (cn < 6)
    return r + cn;

  ll tcs = 0, tcn = 0, t = 1;
  while (t * 9 <= cn)
  {
    t *= 9;
    tcn++;
  }

  t = 1;
  while (t * 6 <= cn)
  {
    t *= 6;
    tcs++;
  }

  return min(cc(cn - powf(6, tcs), r + 1), cc(cn - powf(9, tcn), r + 1));
}

int main()
{
  cin >> N;

  cout << cc(N, 0) << '\n';

  return 0;
}
