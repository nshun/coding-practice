// https://atcoder.jp/contests/abc080/tasks/abc080_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int N, P[100][11], m, t, s;
bool F[100][10];
int main()
{
  cin >> N;
  REP(i, N)
  {
    REP(j, 10)
    {
      cin >> F[i][j];
    }
  }
  REP(i, N)
  {
    REP(j, 11)
    {
      cin >> P[i][j];
    }
  }

  m = -INF;
  FOR(i, 1, 1 << 10)
  {
    s = 0;
    REP(j, N)
    {
      t = 0;
      REP(k, 10)
      {
        if (i >> k & 1 && F[j][k])
          t++;
      }
      s += P[j][t];
    }
    m = max(m, s);
  }

  cout << m << '\n';

  return 0;
}
