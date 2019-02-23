// https://atcoder.jp/contests/abc117/tasks/abc117_b

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

  int sum = 0, m = 0;
  REP(i, n)
  {
    int l;
    cin >> l;
    sum += l;
    m = max(m, l);
  }

  string r = m * 2 < sum ? "Yes" : "No";

  cout << r << '\n';

  return 0;
}
