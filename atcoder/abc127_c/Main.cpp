// https://atcoder.jp/contests/abc127/tasks/abc127_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main()
{
  int N, M, l, r, maxL = 0, minR = INF;
  cin >> N >> M;
  REP(i, M)
  {
    cin >> l >> r;
    maxL = max(maxL, l);
    minR = min(minR, r);
  }

  if (maxL <= minR)
    cout << minR - maxL + 1 << '\n';
  else
    cout << 0 << '\n';

  return 0;
}
