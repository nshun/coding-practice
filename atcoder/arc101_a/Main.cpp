// https://atcoder.jp/contests/abc107/tasks/arc101_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, K, x[100000], r;

int main()
{
  cin >> N >> K;

  REP(i, N)
  {
    cin >> x[i];
  }

  r = INF;
  REP(i, N - K + 1)
  {
    r = min(r, min(abs(x[i + K - 1]), abs(x[i])) + x[i + K - 1] - x[i]);
  }

  cout << r << '\n';

  return 0;
}
