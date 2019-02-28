// https://atcoder.jp/contests/abc082/tasks/arc087_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int N, c, m[100001] = {0};
ll mm;

int main()
{
  c = 0;
  cin >> N;
  REP(i, N)
  {
    cin >> mm;
    if (mm < 100001)
      m[mm]++;
    else
      c++;
  }

  REP(i, 100001)
  {
    c += i <= m[i] ? m[i] - i : m[i];
  }

  cout << c << '\n';

  return 0;
}
