// https://atcoder.jp/contests/abc122/tasks/abc122_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, Q, l, r, cnt, s[100000], v[100000];
char t, lt;

int main()
{

  cin >> N >> Q;

  cnt = 0;
  REP(i, N)
  {
    cin >> t;
    if (lt == 'A' && t == 'C')
      cnt++;
    s[i] = cnt;
    lt = t;
  }

  REP(i, Q)
  {
    cnt = 0;
    cin >> l >> r;
    v[i] = s[r - 1] - s[l - 1];
  }

  REP(i, Q)
  {
    cout << v[i] << '\n';
  }

  return 0;
}
