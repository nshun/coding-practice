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

int main()
{
  ll N, M, a, rr[3] = {0, 0, 1}, MOD = 1e9 + 7;
  vector<bool> A;
  cin >> N >> M;

  REP(i, N + 1)
  {
    A.push_back(true);
  }
  REP(i, M)
  {
    cin >> a;
    A[a] = false;
  }

  FOR(i, 1, N + 1)
  {
    if (A[i])
    {
      rr[0] = rr[1];
      rr[1] = rr[2];
      rr[2] = (rr[0] + rr[1]) % MOD;
    }
    else
    {
      rr[0] = rr[1];
      rr[1] = rr[2];
      rr[2] = 0;
    }
  }

  cout << rr[2] << '\n';
  return 0;
}
