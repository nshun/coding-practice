// https://atcoder.jp/contests/abc127/tasks/abc127_b

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
  int r, D, x;
  cin >> r >> D >> x;

  REP(i, 10)
  {
    x = r * x - D;
    cout << x << '\n';
  }

  return 0;
}
