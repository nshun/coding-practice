// https://atcoder.jp/contests/abc056/tasks/arc070_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll X, r;
int main()
{
  cin >> X;

  r = ceil((sqrt(1 + 8 * X) - 1) / 2);

  cout << r << '\n';

  return 0;
}
