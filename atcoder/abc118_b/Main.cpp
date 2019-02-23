// https://atcoder.jp/contests/abc118/tasks/abc118_b

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
  cin >> n >> m;

  vector<int> mm;
  REP(i, m)
  {
    mm.push_back(0);
  }
  REP(i, n)
  {
    int k;
    cin >> k;
    REP(j, k)
    {
      int a;
      cin >> a;
      mm[a - 1]++;
    }
  }

  cout << count(ALL(mm), n) << '\n';

  return 0;
}
