// https://atcoder.jp/contests/abc133/tasks/abc133_b

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

double distance(vector<int> a, vector<int> b)
{
  double pow_sum = 0;
  rep(i, a.size())
  {
    pow_sum += pow(a[i] - b[i], 2);
  }
  return sqrt(pow_sum);
}

int main()
{
  int N, D, x, result = 0;
  cin >> N >> D;

  vector<vector<int>> X(N);
  rep(i, N)
  {
    rep(j, D)
    {
      cin >> x;
      X[i].pb(x);
    }
  }

  rep(i, N)
  {
    rep(j, i + 1, N)
    {
      double d = distance(X[i], X[j]);
      if (ceil(d) == floor(d))
        result++;
    }
  }

  cout << result << '\n';

  return 0;
}
