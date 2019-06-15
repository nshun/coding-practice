// https://atcoder.jp/contests/diverta2019-2/tasks/diverta2019_2_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

void addElement(pll el, vector<pair<pll, ll>> &L)
{
  for (auto &li : L)
  {
    if (li.first == el)
    {
      li.second++;
      return;
    }
  }
  L.push_back(make_pair(el, 1));
  return;
}

int main()
{
  int N, x, y;
  pll XY[50], PQ[50][50];
  vector<pair<pll, ll>> PQcnt;
  cin >> N;
  REP(i, N)
  {
    cin >> x >> y;
    REP(j, i)
    {
      ll p = x - XY[j].first, q = y - XY[j].second;
      pll pq = make_pair(p, q);
      PQ[i][j] = make_pair(p, q);
      PQ[j][i] = make_pair(-p, -q);
    }
    XY[i] = make_pair(x, y);
  }

  REP(i, N)
  {
    REP(j, N)
    {
      if (i == j)
        continue;
      addElement(PQ[i][j], PQcnt);
    }
  }

  pair<pll, ll> maxpll = make_pair(make_pair(0, 0), -INF);
  for (auto &pqcnt : PQcnt)
  {
    if (maxpll.second < pqcnt.second)
      maxpll = pqcnt;
  }

  ll cnt = N;
  REP(i, N)
  {
    REP(j, N)
    {
      if (i == j)
        continue;
      else if (PQ[i][j] == maxpll.first)
        cnt--;
    }
  }
  cout << cnt << '\n';

  return 0;
}
