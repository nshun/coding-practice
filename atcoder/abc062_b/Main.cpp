// https://atcoder.jp/contests/abc062/tasks/abc062_b

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

  int h, w;
  vector<string> o, p;

  cin >> h >> w;

  REP(i, h)
  {
    string in;
    cin >> in;
    p.push_back(in);
  }

  string temp = "";
  REP(i, w + 2)
  {
    temp += '#';
  }

  REP(i, h + 2)
  {
    if (i == 0 || i == h + 1)
      o.push_back(temp);
    else
      o.push_back('#' + p[i - 1] + '#');
  }

  REP(i, h + 2)
  {
    cout << o[i] << '\n';
  }

  return 0;
}
