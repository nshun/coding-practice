// https://atcoder.jp/contests/agc031/tasks/agc031_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, M, C, l[200001], r, m;
int main()
{
  r = 1;
  m = -1;
  M = 1e9 + 7;

  cin >> N;

  REP(i, N)
  {
    cin >> C;
    if (m == C)
      continue;
    m = C;
    r += l[C];
    r %= M;
    l[C] = r;
  }

  cout << r << '\n';

  return 0;
}
