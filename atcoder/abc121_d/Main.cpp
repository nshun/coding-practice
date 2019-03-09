// https://atcoder.jp/contests/abc121/tasks/abc121_d

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll A, B, D, r, t, j;
bool g[50] = {false};
int main()
{
  r = 0;
  cin >> A >> B;

  t = A;
  j = 0;
  while (0 < t)
  {
    g[j] = t % 2;
    t /= 2;
    j++;
  }

  j = 0;
  t = 1;
  D = B - A + 1;
  while (t < D)
  {
    g[j] = g[j] != (D / t) % 2 ? ((D % t) % 2) : false;
    t *= 2;
    j++;
  }

  j = 0;
  while (1 < B)
  {
    B /= 2;
    j++;
  }
  g[j] = true;

  REP(i, 50)
  {
    if (g[i])
    {
      t = 1;
      REP(k, i)
      {
        t *= 2;
      }
      r += t;
    }
  }

  cout << r << '\n';

  return 0;
}
