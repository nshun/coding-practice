// https://atcoder.jp/contests/abc105/tasks/abc105_b

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

  int n;

  cin >> n;

  bool a = false;
  REP(i, floor(n / 4) + 1)
  {
    if ((n - i * 4) % 7 == 0)
    {
      a = true;
      break;
    }
  }

  string r = a ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
