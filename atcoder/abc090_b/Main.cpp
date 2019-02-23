// https://atcoder.jp/contests/abc090/tasks/abc090_b

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

  int a, b;

  cin >> a >> b;

  int cnt = 0;
  FOR(i, a, b + 1)
  {
    string s = to_string(i);
    if (s[0] == s[4] && s[1] == s[3])
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
