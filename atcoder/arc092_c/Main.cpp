// https://atcoder.jp/contests/abc091/tasks/arc092_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, x, y, r;

vector<bool> v;
vector<set<ll>> n;
vector<pll> ab;
set<pll> g;
stack<pll> est;
set<ll> ese;

stack<pll> ss(stack<pll> m, set<ll> c, ll i, bool f, ll l = -1)
{
  if (!v[i] && 2 < m.size() && m.size() % 2 == 1)
    return m;

  c.insert(i);
  for (auto &p : n[i])
  {
    if (p <= l)
      continue;

    pll nn = i < p ? (pll){i, p} : (pll){p, i};

    if (c.find(p) == c.end() && (g.find(nn) == g.end()) == f)
    {
      m.push(nn);
      return ss(m, c, p, !f);
    }
  }

  if (m.empty())
    return m;

  pll t = m.top();
  ll lt = t.first == i ? t.second : t.first;
  m.pop();
  c.erase(lt);
  return ss(m, c, lt, !f, i);
}

bool bb(ll i)
{
  stack<pll> t = ss(est, ese, i, true);

  if (0 < t.size())
  {
    while (!t.empty())
    {
      pll p = t.top();
      t.pop();
      auto itr = g.find(p);
      if (itr == g.end())
        g.insert(p);
      else
        g.erase(itr);
    }

    return true;
  }
  else
    return false;
}

void calc()
{
  REP(i, 2 * N)
  {
    v[i] = false;
  }
  for (auto &p : g)
    v[p.first] = v[p.second] = true;

  REP(i, 2 * N)
  {
    if (!v[i] && bb(i))
      return calc();
  }
  return;
}

int main()
{
  cin >> N;
  REP(i, 2 * N)
  {
    v.push_back(false);
  }
  REP(i, N)
  {
    set<ll> t;
    cin >> x >> y;
    ab.push_back(make_pair(x, y));
    n.push_back(t);
  }
  REP(i, N)
  {
    set<ll> t;
    cin >> x >> y;
    REP(j, N)
    {
      if (ab[j].first < x && ab[j].second < y)
      {
        n[j].insert(N + i);
        t.insert(j);
      }
    }
    n.push_back(t);
  }

  REP(i, 2 * N)
  {
    for (auto &j : n[i])
    {
      if (v[i] || v[j])
        continue;

      g.insert(i < j ? (pll){i, j} : (pll){j, i});
      v[i] = v[j] = true;
    };
  }

  calc();

  cout << g.size() << '\n';

  return 0;
}
