// https://atcoder.jp/contests/abc116/tasks/abc116_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int f(int i)
{
  return i % 2 == 0 ? i / 2 : 3 * i + 1;
}

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int s;
  cin >> s;

  set<int> v;

  int i = 1, l = s;
  while (true)
  {
    v.insert(l);
    i++;
    int n = f(l);
    if (0 < v.count(n))
      break;
    l = n;
  }

  cout << i << '\n';

  return 0;
}
