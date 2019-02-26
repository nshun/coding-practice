// https://atcoder.jp/contests/abc063/tasks/arc075_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, s, sum, m;

int main()
{
  sum = 0;
  m = INF;
  cin >> N;

  REP(i, N)
  {
    cin >> s;
    sum += s;
    if (0 < s % 10)
      m = min(m, s);
  }

  if (sum % 10 == 0)
    sum -= m;

  cout << max(0ll, sum) << '\n';

  return 0;
}
