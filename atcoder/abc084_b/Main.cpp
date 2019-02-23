// https://atcoder.jp/contests/abc084/tasks/abc084_b

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
  string s, r = "No";

  cin >> a >> b >> s;

  if (a + b + 1 == s.length())
  {
    r = "Yes";
    REP(i, s.length())
    {
      if (i == a)
      {
        if (s[i] != '-')
        {
          r = "No";
          break;
        }
      }
      else if (s[i] < '0' || '9' < s[i])
      {
        r = "No";
        break;
      }
    }
  }

  cout << r << '\n';

  return 0;
}
