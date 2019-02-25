// https://atcoder.jp/contests/abc048/tasks/arc064_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

ll N, x, a, c, d, l;
int main()
{
  c = l = 0;
  cin >> N >> x;
  REP(i, N)
  {
    cin >> a;
    d = max(0ll, l + a - x);
    c += d;
    l = a - d;
  }

  cout << c << '\n';

  return 0;
}
