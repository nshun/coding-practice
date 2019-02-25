// https://atcoder.jp/contests/abc060/tasks/arc073_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, T, t, l, sum;
int main()
{
  cin >> N >> T >> l;

  sum = T;
  REP(i, N - 1)
  {
    cin >> t;
    sum += min(T, t - l);
    l = t;
  }

  cout << sum << '\n';

  return 0;
}
