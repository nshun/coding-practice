// https://atcoder.jp/contests/abc075/tasks/abc075_b

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
  vector<string> s;

  cin >> h >> w;

  REP(i, h)
  {
    string si;
    cin >> si;
    s.push_back(si);
  }

  REP(i, h)
  {
    string r = "";
    REP(j, w)
    {
      if (s[i][j] != '.')
      {
        r += s[i][j];
        continue;
      }
      else
      {
        int cnt = 0;
        if (0 < i)
        {
          if (0 < j && s[i - 1][j - 1] == '#')
            cnt++;
          if (s[i - 1][j] == '#')
            cnt++;
          if (j < w - 1 && s[i - 1][j + 1] == '#')
            cnt++;
        }

        if (i < h - 1)
        {
          if (0 < j && s[i + 1][j - 1] == '#')
            cnt++;
          if (s[i + 1][j] == '#')
            cnt++;
          if (j < w - 1 && s[i + 1][j + 1] == '#')
            cnt++;
        }

        if (0 < j)
        {
          if (s[i][j - 1] == '#')
            cnt++;
        }
        if (j < w - 1)
        {
          if (s[i][j + 1] == '#')
            cnt++;
        }

        r += to_string(cnt);
      }
    }
    s[i] = r;
  }

  REP(i, h)
  {
    cout << s[i] << '\n';
  }

  return 0;
}
