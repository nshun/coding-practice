// https://atcoder.jp/contests/abc127/tasks/abc127_d

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
  ll N, M, a, b, c, cnt = 0, total = 0;
  map<ll, ll> A;

  cin >> N >> M;
  REP(i, N)
  {
    cin >> a;
    if (A.find(a) != A.end())
      A[a]++;
    else
      A[a] = 1;
  }
  REP(i, M)
  {
    cin >> b >> c;
    if (A.find(c) != A.end())
      A[c] += b;
    else
      A[c] = b;
  }

  for (auto itr = A.rbegin(); itr != A.rend(); ++itr)
  {
    if (N < cnt)
      break;
    else
      total += itr->first * min(itr->second, N - cnt);
    cnt += itr->second;
  }

  cout << total << '\n';

  return 0;
}
