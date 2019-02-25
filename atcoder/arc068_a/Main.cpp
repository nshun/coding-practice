// https://atcoder.jp/contests/abc053/tasks/arc068_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll x, c;
int main()
{
  cin >> x;

  c = (x / 11) * 2 + ((x % 11) + 5) / 6;

  cout << c << '\n';

  return 0;
}
