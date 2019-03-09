// https://atcoder.jp/contests/abc121/tasks/abc121_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, M, A, B, j, sum, csum;
vector<pll> d;
int main()
{
  sum = csum = 0;

  cin >> N >> M;

  REP(i, N)
  {
    cin >> A >> B;
    d.push_back(make_pair(A, B));
  }

  sort(ALL(d));

  REP(i, N)
  {
    if (M < sum + d[i].second)
    {
      csum += d[i].first * (M - sum);
      break;
    }
    else
    {
      sum += d[i].second;
      csum += d[i].first * d[i].second;
    }
  }

  cout << csum << '\n';

  return 0;
}
