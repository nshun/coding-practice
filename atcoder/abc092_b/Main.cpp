// https://atcoder.jp/contests/abc092/tasks/abc092_b

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

  int n, d, x;
  vector<int> a;

  cin >> n >> d >> x;
  REP(i, n)
  {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }

  REP(i, n)
  {
    int day = 0;
    while (day < d)
    {
      day += a[i];
      x++;
    }
  }

  cout << x << '\n';

  return 0;
}
