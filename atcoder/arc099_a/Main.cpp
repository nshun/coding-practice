// https://atcoder.jp/contests/abc101/tasks/arc099_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, K, A;

int main()
{
  cin >> N >> K;
  REP(i, N)
  {
    cin >> A;
  }

  cout << (N + K - 3) / (K - 1) << '\n';

  return 0;
}
