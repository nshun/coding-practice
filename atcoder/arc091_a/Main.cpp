// https://atcoder.jp/contests/abc090/tasks/arc091_a

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
  ll N, M;
  cin >> N >> M;

  cout << (N == 1 ? 1 : N - 2) * (M == 1 ? 1 : M - 2) << '\n';

  return 0;
}
