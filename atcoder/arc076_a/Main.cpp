// https://atcoder.jp/contests/abc065/tasks/arc076_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, M, c, cnt;
int main()
{
  c = 1000000007;
  cin >> N >> M;

  cnt = 0;
  if (abs(N - M) <= 1)
  {
    cnt = N == M ? 2 : 1;
    REP(i, N)
    {
      cnt = (cnt * (i + 1) % c);
    }
    REP(i, M)
    {
      cnt = (cnt * (i + 1) % c);
    }
  }

  cout << cnt << '\n';

  return 0;
}
