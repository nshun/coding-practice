// https://atcoder.jp/contests/abc065/tasks/abc065_b

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

  int n, o;
  vector<int> a;
  set<int> v;

  cin >> n;

  REP(i, n)
  {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }

  int c = 1;
  while (true)
  {
    if (c == 2)
      break;
    else
    {
      int ns = v.size();
      v.insert(c);
      if (ns == v.size())
        break;
      c = a[c - 1];
    }
  }

  o = c == 2 ? v.size() : -1;

  cout << o << '\n';

  return 0;
}
