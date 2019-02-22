// https://atcoder.jp/contests/abc064/tasks/abc064_b

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

  int m;

  vector<int> a;

  cin >> m;

  REP(i, m)
  {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }

  sort(ALL(a));

  cout << a.back() - a.front() << '\n';

  return 0;
}
