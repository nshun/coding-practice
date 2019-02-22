// https://atcoder.jp/contests/abc067/tasks/abc067_b

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

  int n, k, sum = 0;
  vector<int> l;

  cin >> n >> k;

  REP(i, n)
  {
    int li;
    cin >> li;
    l.push_back(li);
  }

  sort(ALL(l), greater<int>());

  REP(i, k)
  {
    sum += l[i];
  }

  cout << sum << '\n';

  return 0;
}
