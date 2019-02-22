// https://atcoder.jp/contests/abc059/tasks/abc059_b

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

  string a, b, r;

  cin >> a >> b;

  if (a == b)
    r = "EQUAL";
  else if (b.length() < a.length())
    r = "GREATER";
  else if (a.length() < b.length())
    r = "LESS";
  else
    r = a[0] < b[0] ? "LESS" : "GREATER";

  cout << r << '\n';

  return 0;
}
