// https://atcoder.jp/contests/abc057/tasks/abc057_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, m;

int main()
{
  m = INF;
  cin >> N;

  FOR(i, 1, sqrt(N + 1))
  {
    if (N % i == 0)
      m = min(m, (ll)(to_string(N / i).length()));
  }

  cout << m << '\n';

  return 0;
}
