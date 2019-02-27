// https://atcoder.jp/contests/abc079/tasks/abc079_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int t, s;
string l, r;
int main()
{
  cin >> l;
  REP(i, 8)
  {
    t = l[0] - '0';
    r = l[0];
    REP(j, 3)
    {
      char c = l[j + 1];
      if (i >> j & 1)
      {
        t += c - '0';
        r += '+';
      }
      else
      {
        t -= c - '0';
        r += '-';
      }
      r += c;
    }
    if (t == 7)
      break;
  }
  cout << r << "=7" << '\n';

  return 0;
}
