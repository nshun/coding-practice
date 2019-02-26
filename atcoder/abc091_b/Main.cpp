// https://atcoder.jp/contests/abc091/tasks/abc091_b

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
  vector<pair<string, int>> s;

  cin >> n;
  REP(i, n)
  {
    string si;
    cin >> si;
    bool ed = false;
    REP(i, s.size())
    {
      if (s[i].first == si)
      {
        s[i].second++;
        ed = true;
        break;
      }
    }
    if (!ed)
      s.push_back({si, 1});
  }

  cin >> n;
  REP(i, n)
  {
    string si;
    cin >> si;
    bool ed = false;
    REP(i, s.size())
    {
      if (s[i].first == si)
      {
        s[i].second--;
        ed = true;
        break;
      }
    }
  }

  int r = 0;
  REP(i, s.size())
  {
    if (r < s[i].second)
      r = s[i].second;
  }

  cout << r << '\n';

  return 0;
}
