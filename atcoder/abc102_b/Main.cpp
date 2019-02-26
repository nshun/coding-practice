// https://atcoder.jp/contests/abc102/tasks/abc102_b

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

  int n, m = 0;
  set<int> a;

  cin >> n;
  REP(i, n)
  {
    int ai;
    cin >> ai;
    for (auto &aa : a)
    {
      m = max(m, abs(aa - ai));
    }
    a.insert(ai);
  }

  cout << m << '\n';

  return 0;
}
