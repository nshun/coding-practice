// https://atcoder.jp/contests/abc069/tasks/arc080_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, a, f, o;
string r;

int main()
{
  o = f = 0;
  cin >> N;
  REP(i, N)
  {
    cin >> a;
    if (a % 4 == 0)
      f++;
    else if (a % 2 != 0)
      o++;
  }

  r = min(o, f) == N / 2 || o <= f ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
