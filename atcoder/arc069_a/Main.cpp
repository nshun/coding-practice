// https://atcoder.jp/contests/abc055/tasks/arc069_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, M, t, cnt;
int main()
{
  cnt = 0;

  cin >> N >> M;

  t = min(N, M / 2);
  cnt += t;
  M -= 2 * t;
  cnt += M / 4;

  cout << cnt << '\n';

  return 0;
}
