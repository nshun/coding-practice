// https://atcoder.jp/contests/abc144/tasks/abc144_c

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

vector<ll> divisor(ll n)
{
  vector<ll> ret;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ret.push_back(i);
      if (i * i != n)
        ret.push_back(n / i);
    }
  }
  sort(ALL(ret));
  return (ret);
}

int main()
{
  ll N, result = -2;
  cin >> N;

  auto sq = sqrt(N);
  if (sq == floor(sq))
  {
    result += sq * 2;
  }else{
    auto dd = divisor(N);
    auto s = dd.size();
    result += dd[s / 2 - 1];
    result += dd[s / 2];
  }
  cout << result << '\n';

  return 0;
}
