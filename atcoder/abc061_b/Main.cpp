// https://atcoder.jp/contests/abc061/tasks/abc061_b

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

  int n, m;
  vector<int> r;

  cin >> n >> m;

  REP(i, n)
  {
    r.push_back(0);
  }

  REP(i, m)
  {
    int ai, bi;
    cin >> ai >> bi;
    r[ai - 1]++;
    r[bi - 1]++;
  }

  REP(i, n)
  {
    cout << r[i] << '\n';
  }

  return 0;
}
