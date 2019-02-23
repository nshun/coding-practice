// https://atcoder.jp/contests/abc098/tasks/abc098_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int ma(int p, string &s)
{
  string x = s.substr(0, p),
         y = s.substr(p);
  set<char> m;

  REP(i, p)
  {
    if (y.find(x[i]) != string::npos)
      m.insert(x[i]);
  }

  return m.size();
}

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int n;
  string s;

  cin >> n >> s;

  int p = 0, m = 0;

  while (++p < s.length())
  {
    m = max(m, ma(p, s));
  }

  cout << m << '\n';

  return 0;
}
