// https://atcoder.jp/contests/abc082/tasks/abc082_b

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

  string s, t;

  cin >> s >> t;

  sort(ALL(s));
  sort(ALL(t));
  reverse(ALL(t));

  string r = "No";
  REP(i, max(s.length(), t.length()))
  {
    if (s.length() <= i)
    {
      r = "Yes";
      break;
    }
    if (s[i] == t[i])
      continue;
    r = s[i] < t[i] ? "Yes" : "No";
    break;
  }

  cout << r << '\n';

  return 0;
}
