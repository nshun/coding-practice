// https://atcoder.jp/contests/abc109/tasks/abc109_b

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
  set<string> w;
  cin >> n;

  char l;
  string r = "Yes";

  string wi;
  cin >> wi;
  w.insert(wi);
  l = wi.back();

  REP(i, n - 1)
  {
    cin >> wi;
    if (l != wi[0] || w.count(wi) != 0)
      r = "No";
    w.insert(wi);
    l = wi.back();
  }

  cout << r << '\n';

  return 0;
}
