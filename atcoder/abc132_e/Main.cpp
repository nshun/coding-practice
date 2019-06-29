// https://atcoder.jp/contests/abc132/tasks/abc132_e

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

vector<vector<ll>> G;
unordered_set<ll> visited;

vector<ll> kkp(vector<ll> from, ll depth)
{
  if (depth == 3)
    return from;

  vector<ll> to;
  for (auto &f : from)
  {
    for (auto &t : G[f])
    {
      to.pb(t);
    }
  }

  sort(ALL(to));
  UNIQUE(to);
  return kkp(to, depth + 1);
}

ll trip(ll from, ll to)
{
  ll cnt = 0;
  vector<ll> now = {from}, next;

  while (now.size() != 0)
  {
    if (find(ALL(now), to) != now.end())
      return cnt;

    vector<ll> nn = kkp(now, 0);
    for (ll &p : nn)
    {
      if (visited.find(p) == visited.end())
      {
        visited.insert(p);
        next.pb(p);
      }
    }
    now = next;
    next.clear();
    cnt++;
  }
  return -1;
}

int main()
{
  ll N, M, u, v, S, T;
  vector<ll> evl;
  cin >> N >> M;

  REP(i, N)
  {
    G.pb(evl);
  }
  rep(i, M)
  {
    cin >> u >> v;
    G[u - 1].pb(v - 1);
  }
  cin >> S >> T;

  cout << trip(S - 1, T - 1) << '\n';

  return 0;
}
