// https://atcoder.jp/contests/abc094/tasks/arc095_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int x[3];

int main()
{
  cin >> x[0] >> x[1] >> x[2];

  sort(x, x + 3);

  int bc = x[2] - x[1],
      ab = x[1] - x[0],
      r = ab % 2 ? bc + ab / 2 + 2 : bc + ab / 2;

  cout << r << '\n';

  return 0;
}
