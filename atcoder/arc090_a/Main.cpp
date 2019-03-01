// https://atcoder.jp/contests/abc087/tasks/arc090_a

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
  int N, sum, m, t, a[100], b[100];

  cin >> N;
  sum = 0;
  REP(i, N)
  {
    cin >> t;
    sum += t;
    a[i] = sum;
  }
  sum = 0;
  REP(i, N)
  {
    cin >> t;
    sum += t;
    b[i] = sum;
  }

  m = a[0] + sum;
  FOR(i, 1, N)
  {
    m = max(m, a[i] + sum - b[i - 1]);
  }

  cout << m << '\n';

  return 0;
}
