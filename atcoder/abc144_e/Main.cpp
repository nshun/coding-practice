// https://atcoder.jp/contests/

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

int main()
{
  ll N, K;
  cin >> N >> K;

  vector<ll> A(N), F(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> F[i];
  sort(ALL(A));
  sort(ALL(F), greater<ll>());

  ll l = -1, r = 10e12;
  while (l + 1 < r)
  {
    ll mid = (l + r) / 2, sum = 0;
    rep(i, N)
    {
      sum += max(A[i] - mid / F[i], 0ll);
    }
    if (K < sum)
      l = mid;
    else
      r = mid;
  }

  cout << r << '\n';

  return 0;
}
