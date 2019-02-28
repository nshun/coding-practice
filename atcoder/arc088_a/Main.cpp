// https://atcoder.jp/contests/abc083/tasks/arc088_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main()
{
  ll X, Y, r = 0;
  cin >> X >> Y;

  while (X <= Y)
  {
    X = X << 1;
    r++;
  }

  cout << r << '\n';

  return 0;
}
