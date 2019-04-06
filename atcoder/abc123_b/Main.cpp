// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main()
{
  int t, r = 0, m = 10;

  REP(i, 5)
  {
    cin >> t;
    r += ceil((double)t / 10) * 10;
    if (t % 10 != 0)
      m = min(m, t % 10);
  }

  cout << r - 10 + m << '\n';

  return 0;
}
