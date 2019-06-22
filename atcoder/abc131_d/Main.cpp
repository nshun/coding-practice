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

auto c = [](pll l, pll r) { return l.second == r.second ? l.first < r.first : l.second < r.second; };
priority_queue<pll, vector<pll>, decltype(c)> tasks(c);
ll last;

bool work(pll task)
{
  last = min(last, task.second) - task.first;
  return 0 <= last;
}

int main()
{
  bool result = true;
  ll N, a, b;
  cin >> N;
  rep(i, N)
  {
    cin >> a >> b;
    tasks.push(mp(a, b));
  }
  last = tasks.top().second;

  while (result && !tasks.empty())
  {
    pll task = tasks.top();
    tasks.pop();
    result = work(task);
  }

  cout << (result ? "Yes" : "No") << '\n';

  return 0;
}
