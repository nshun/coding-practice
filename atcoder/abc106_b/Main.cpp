// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int pn[] = {3, 5, 7, 11};

int cdn(int c)
{
  int cd = 1,
      i = 0;

  while (1 < c && i < 4)
  {
    int d = 0;
    while (c % pn[i] == 0)
    {
      d++;
      c /= pn[i];
    }
    cd *= (d + 1);
    i++;
  }
  if (1 < c)
    cd *= 2;

  return cd;
}

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int n;

  cin >> n;

  int cnt = 0;
  FOR(i, 105, n + 1)
  {
    if (i % 2 == 1 && cdn(i) == 8)
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
