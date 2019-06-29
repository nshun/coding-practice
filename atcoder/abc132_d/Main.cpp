// https://atcoder.jp/contests/abc132/tasks/abc132_d

#include <bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define FORR(i, m, n) for (int(i) = (n); (i) >= (m); i--)
#define rep(...) _overload3(__VA_ARGS__, FOR, REP, )(__VA_ARGS__)
#define repr(...) _overload3(__VA_ARGS__, FORR, REPR, )(__VA_ARGS__)
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll MOD = 1e9 + 7;

vector<vector<ll>> comb(int n, int r)
{
  vector<vector<ll>> v(n + 1, vector<ll>(n + 1, 0));
  for (int i = 0; i < v.size(); i++)
  {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++)
  {
    for (int k = 1; k < j; k++)
    {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]) % MOD;
    }
  }
  return v;
}

int main()
{
  ll N, K;
  cin >> N >> K;

  auto c = comb(N, K);
  rep(i, K)
  {
    cout << (c[N - K + 1][i + 1] * c[K - 1][i]) % MOD << '\n';
  }

  return 0;
}
