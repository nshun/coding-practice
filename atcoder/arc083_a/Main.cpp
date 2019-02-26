// https://atcoder.jp/contests/abc074/tasks/arc083_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int A, B, C, D, E, F, ma, mb, l;
double cd, md;
set<int> x, y;

int main()
{
  cin >> A >> B >> C >> D >> E >> F;

  l = (F + B - 1) / B;
  REP(i, l)
  {
    ll xi = i * B;
    while (xi <= F)
    {
      if (0 < xi)
        x.insert(xi * 100);
      xi += A;
    }
  }
  double ms = 1.0 * F / (100 + E) * E;
  l = (ms + D - 1) / D;
  REP(i, l)
  {
    ll yi = i * D;
    while (yi <= ms)
    {
      y.insert(yi);
      yi += C;
    }
  }

  ma = A * 100;
  md = mb = 0;
  for (auto &a : x)
  {
    for (auto &b : y)
    {
      if (100 * b <= a * E && a + b <= F)
      {
        cd = 100.0 * b / (a + b);
        if (md < cd)
        {
          md = cd;
          ma = a + b;
          mb = b;
        }
      }
    }
  }

  cout << ma << " " << mb << '\n';

  return 0;
}
