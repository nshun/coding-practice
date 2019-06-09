// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main()
{
  int H, W, R[2000][2000], maximum = 0;
  bool S[2000][2000];
  string s;

  cin >> H >> W;
  REP(i, H)
  {
    cin >> s;
    REP(j, W)
    {
      S[i][j] = s[j] == '.';
    }
  }

  int cnt;
  REP(i, H)
  {
    REP(j, W)
    {
      if (S[i][j])
      {
        cnt = 1;
        FOR(k, j + 1, W)
        {
          if (S[i][k])
            cnt++;
          else
            break;
        }
        REP(k, cnt)
        {
          R[i][j + k] = cnt;
        }
        j += cnt - 1;
      }
      else
      {
        R[i][j] = 0;
      }
    }
  }
  REP(i, W)
  {
    REP(j, H)
    {
      if (S[j][i])
      {
        cnt = 1;
        FOR(k, j + 1, H)
        {
          if (S[k][i])
            cnt++;
          else
            break;
        }
        REP(k, cnt)
        {
          R[j + k][i] += cnt - 1;
        }
        j += cnt - 1;
      }
    }
  }

  REP(i, H)
  {
    REP(j, W)
    {
      maximum = max(maximum, R[i][j]);
    }
  }

  cout << maximum << '\n';
1111 11111 11111 11111
524287
  return 0;
}
