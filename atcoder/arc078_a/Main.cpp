// https://atcoder.jp/contests/abc067/tasks/arc078_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, ai, a[200001], sum, m;

int main()
{
  sum = 0;

  cin >> N;
  REP(i, N)
  {
    cin >> ai;
    sum += ai;
    a[i] = sum;
  }

  m = sum - 2 * a[0];
  FOR(i, 1, N - 1)
  {
    m = min(m, sum - 2 * a[i]);
  }

  cout << m << '\n';

  return 0;
}
