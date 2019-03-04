// https://atcoder.jp/contests/abc100/tasks/abc100_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, a, tc = 0;

int main()
{
  cin >> N;
  REP(i, N)
  {
    cin >> a;
    while (a % 2 == 0)
    {
      tc++;
      a /= 2;
    }
  }

  cout << tc << '\n';

  return 0;
}
