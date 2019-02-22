// https://atcoder.jp/contests/abc052/tasks/abc052_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int n, x = 0, mx = 0;
  string s;

  cin >> n >> s;

  REP(i, n)
  {
    if (s[i] == 'I')
      x++;
    else
      x--;

    mx = max(x, mx);
  }

  cout << mx << '\n';

  return 0;
}
