// https://atcoder.jp/contests/abc059/tasks/arc072_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

int main()
{
  ll n, a, c[2] = {0, 0}, s[2] = {0, 0};

  cin >> n;

  REP(i, n)
  {
    cin >> a;
    REP(j, 2)
    {
      bool t = (i + j) % 2 == 0;
      s[j] += a;
      if ((t && s[j] <= 0) || (!t && 0 <= s[j]))
      {
        c[j] += abs(s[j]) + 1;
        s[j] = t ? 1 : -1;
      }
    }
  }

  cout << min(c[0], c[1]) << '\n';

  return 0;
}
