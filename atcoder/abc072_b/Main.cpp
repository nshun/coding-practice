// https://atcoder.jp/contests/abc072/tasks/abc072_b

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

  string s, r = "";

  cin >> s;

  int len = s.length();
  REP(i, len)
  {
    if (i % 2 == 0)
      r += s[i];
  }

  cout << r << '\n';

  return 0;
}
