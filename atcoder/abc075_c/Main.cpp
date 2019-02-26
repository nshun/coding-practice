// https://atcoder.jp/contests/abc075/tasks/abc075_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int N, M, a, b, cnt;
unordered_map<int, set<int>> g;
vector<pair<int, int>> s;

void check(int n, pair<int, int> &p, set<int> &v)
{
  for (auto &d : g[n])
  {
    if (p.first == min(n, d) && p.second == max(n, d))
      continue;

    auto r = v.insert(d);
    if (r.second)
      check(d, p, v);
  }
  return;
}

int main()
{
  cnt = 0;
  cin >> N >> M;
  REP(i, N)
  {
    g[i] = {};
  }
  REP(i, M)
  {
    cin >> a >> b;
    if (b < a)
      swap(a, b);
    s.push_back(make_pair(a - 1, b - 1));
    g[a - 1].insert(b - 1);
    g[b - 1].insert(a - 1);
  }

  for (auto &ss : s)
  {
    set<int> v = {0};
    check(0, ss, v);
    if (v.size() < N)
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
