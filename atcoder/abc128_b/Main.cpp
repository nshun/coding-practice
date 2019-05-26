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
using psi = pair<string, int>;

bool orig_sort(pair<psi, int> lhs, pair<psi, int> rhs)
{
  if (lhs.first.first == rhs.first.first)
    return lhs.first.second > rhs.first.second;
  else
    return lhs.first.first < rhs.first.first;
}

int main()
{
  int N;
  cin >> N;

  vector<pair<psi, int>> vpss;
  REP(i, N)
  {
    psi t;
    cin >> t.first >> t.second;
    vpss.push_back(make_pair(t, i + 1));
  }

  sort(ALL(vpss), orig_sort);

  for (auto &p : vpss)
  {
    cout << p.second << '\n';
  }

  return 0;
}
