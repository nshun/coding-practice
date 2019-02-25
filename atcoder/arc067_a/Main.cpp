// https://atcoder.jp/contests/abc052/tasks/arc067_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, m, cnt;
vector<pll> pf;

void pfn(vector<pll> &s, int t)
{
  for (pll &a : s)
  {
    while (t % a.first == 0)
    {
      t /= a.first;
      a.second++;
    }
  }
  if (t != 1)
    s.push_back(make_pair(t, 1ll));
  return;
}

int main()
{
  cnt = 1;
  m = 1;
  REP(i, 9)
  {
    m *= 10;
  };
  m += 7;

  cin >> N;
  FOR(i, 2, N + 1)
  {
    pfn(pf, i);
  }

  for (pll &a : pf)
    cnt = (cnt * (a.second + 1)) % m;

  cout << cnt << '\n';

  return 0;
}
