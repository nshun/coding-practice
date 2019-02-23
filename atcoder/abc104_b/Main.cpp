// https://atcoder.jp/contests/abc104/tasks/abc104_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

bool check(string &s)
{
  if (count(ALL(s), 'A') != 1 || count(ALL(s), 'C') != 1)
    return false;

  int cp, ap;
  int l = s.length();
  FOR(i, 0, l)
  {
    if (s[i] != tolower(s[i]))
    {
      if (s[i] == 'A')
        ap = i;
      else if (s[i] == 'C')
        cp = i;
      else
        return false;
    }
  }

  return ap == 0 && 1 < cp && cp < l - 1;
}

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  string s;

  cin >> s;

  string r = check(s) ? "AC" : "WA";

  cout << r << '\n';

  return 0;
}
