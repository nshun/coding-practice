// https://atcoder.jp/contests/abc097/tasks/abc097_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int search(int x)
{
  REPR(i, x)
  {
    FOR(j, 2, ceil(sqrt(i)) + 1)
    {
      int k = 0, c = 1;
      while (c < i)
      {
        k++;
        c *= j;
        if (c == i)
          return i;
      }
    }
  }
  return 1;
}

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int x;

  cin >> x;

  cout << search(x) << '\n';

  return 0;
}
