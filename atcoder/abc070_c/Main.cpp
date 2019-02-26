// https://atcoder.jp/contests/abc070/tasks/abc070_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, T, m;

ll ea(ll a, ll b)
{
  if (a < b)
    swap(a, b);

  ll r = a % b,
     c = a, d = b;
  while (r != 0)
  {
    c = d;
    d = r;
    r = c % d;
  }
  return a / d * b;
}

int main()
{
  cin >> N >> T;

  m = T;
  REP(i, N - 1)
  {
    cin >> T;
    m = ea(m, T);
  }

  cout << m << '\n';

  return 0;
}
