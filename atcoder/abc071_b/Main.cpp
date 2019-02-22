// https://atcoder.jp/contests/abc071/tasks/abc071_b

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

  string s, r = "None";
  char a[] = "abcdefghijklmnopqrstuvwxyz";

  cin >> s;

  REP(i, 26)
  {
    if (s.find(a[i]) == string::npos)
    {
      r = a[i];
      break;
    }
  }

  cout << r << '\n';

  return 0;
}
