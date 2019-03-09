// https://atcoder.jp/contests/abc121/tasks/abc121_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll H, W, h, w;

int main()
{
  cin >> H >> W >> h >> w;

  cout << ((H - h) * (W - w)) << '\n';

  return 0;
}
