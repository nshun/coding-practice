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

ll gcd(ll a, ll b)
{
  return b == 0 ? a : gcd(b, a % b);
}

int main()
{
  ll N, mg = 1;
  vector<ll> A(1e5), G(1e5), L(1e5);
  cin >> N;
  REP(i, N)
  {
    cin >> A[i];
  }

  REP(i, N + 1)
  {
    G[i] = i == 0 ? 0 : gcd(G[i - 1], A[i - 1]);
    L[i] = i == 0 ? 0 : gcd(L[i - 1], A[N - i]);
  }

  REP(i, N)
  {
    mg = max(mg, gcd(G[i], L[N - i - 1]));
  }

  cout << mg << '\n';

  return 0;
}
