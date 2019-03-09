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

ll N, M, C, B[20], A, cnt, sum;
int main()
{
  cnt = 0;

  cin >> N >> M >> C;
  REP(i, M)
  {
    cin >> B[i];
  }

  REP(i, N)
  {
    sum = C;
    REP(j, M)
    {
      cin >> A;
      sum += A * B[j];
    }
    if (0 < sum)
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
