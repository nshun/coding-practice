// https://atcoder.jp/contests/abc133/tasks/abc133_c

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
  ll L, R;
  cin >> L >> R;

  if (2100 < R - L)
  {
    cout << 0 << '\n';
  }
  else
  {
    ll minimum = INF;
    for (ll i = L; i < R + 1; i++)
    {
      for (ll j = i + 1; j < R + 1; j++)
      {
        minimum = min(minimum, (i * j) % 2019);
      }
    }
    cout << minimum << '\n';
  }

  return 0;
}
