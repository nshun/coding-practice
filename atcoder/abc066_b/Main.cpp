// https://atcoder.jp/contests/abc066/tasks/abc066_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int isss(string s)
{
  int l = s.length();
  return s.substr(0, l / 2) == s.substr(l / 2)
             ? s.length()
             : isss(s.substr(0, l - 2));
}

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  string s;

  cin >> s;

  int lm = isss(s.substr(0, s.length() - 2));

  cout << lm << '\n';

  return 0;
}
