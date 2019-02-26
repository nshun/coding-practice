// https://atcoder.jp/contests/abc064/tasks/abc064_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

int N, a, b, mc;
bool c[7];

int main()
{
  cin >> N;
  REP(i, N)
  {
    cin >> a;
    if (3200 <= a)
      mc++;
    else
      c[a / 400] = true;
  }
  b = count(c, c + 7, true);

  cout << max(1, b) << " " << b + mc << '\n';

  return 0;
}
