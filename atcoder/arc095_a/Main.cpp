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

ll N, X[200000], Xc[200000], m, t;

int main()
{
  cin >> N;
  REP(i, N)
  {
    cin >> X[i];
  }

  copy(X, X + N, Xc);

  sort(X, X + N);
  m = X[(N + 1) / 2 - 1];

  REP(i, N)
  {
    t = m < Xc[i] ? X[(N + 1) / 2 - 1] : X[(N + 1) / 2];
    cout << t << '\n';
  }

  return 0;
}
