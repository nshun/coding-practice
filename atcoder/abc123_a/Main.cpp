// https://atcoder.jp/contests/abc123/tasks/abc123_a

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
  int x[5], m = -INF, k;

  REP(i, 5)
  {
    cin >> x[i];
    REP(j, i - 1)
    {
      m = max(m, abs(x[i] - x[j]));
    }
  }

  cin >> k;

  cout << (k < m ? ":(" : "Yay!") << '\n';

  return 0;
}
