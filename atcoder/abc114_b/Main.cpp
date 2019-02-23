// https://atcoder.jp/contests/abc114/tasks/abc114_b

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

  string s;

  cin >> s;

  int n = INF;
  REP(i, s.length() - 2)
  {
    string t = s.substr(i, 3);
    int d = abs(753 - stoi(t));
    n = min(n, d);
  }

  cout << n << '\n';

  return 0;
}
