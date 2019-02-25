// https://atcoder.jp/contests/abc061/tasks/abc061_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, K, a, b, c[100000], r;

int main()
{
  for (auto &cc : c)
    cc = 0;

  cin >> N >> K;

  REP(i, N)
  {
    cin >> a >> b;
    c[a - 1] += b;
  }

  r = 0;
  while (0 < K)
    K -= c[r++];

  cout << r << '\n';

  return 0;
}
