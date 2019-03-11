// https://atcoder.jp/contests/abc108/tasks/arc102_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, K, a, b, cnt;
int main()
{
  cin >> N >> K;

  a = N / K;
  b = K % 2 ? 0 : (N + K / 2) / K;
  cnt = a * a * a + b * b * b;
  cout << cnt << '\n';

  return 0;
}
