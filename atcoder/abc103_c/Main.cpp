// https://atcoder.jp/contests/abc103/tasks/abc103_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, a, r = 0;
int main()
{
  cin >> N;
  REP(i, N)
  {
    cin >> a;
    r += (a - 1);
  }

  cout << r << '\n';
  return 0;
}
