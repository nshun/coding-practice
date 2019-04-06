// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e15 + 1
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main()
{
  ll N, t, l = INF, r = 0;

  cin >> N;

  REP(i, 5)
  {
    cin >> t;
    if (t < l)
    {
      l = t;
      r = i + (N + t - 1) / t;
    }
    else
    {
      r++;
    }
  }

  cout << r << '\n';

  return 0;
}
