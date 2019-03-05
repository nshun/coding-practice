// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N;
string r;
int main()
{
  cin >> N;

  r = N == 0 ? "0" : "";
  while (N != 0)
  {
    r += to_string(abs(N % 2));
    N -= abs(N % 2);
    N /= -2;
  }
  reverse(ALL(r));

  cout << r << '\n';

  return 0;
}
