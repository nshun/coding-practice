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

bool ch(int a, int b, int c, int d)
{
  return !((a == 0 && b == 3 && c == 2) || (b == 0 && c == 3 && d == 2));
}

bool check(int a, int b, int c, int d)
{
  return ch(a, b, c, d) && ch(a, b, d, c) && ch(a, c, b, d) && ch(b, a, c, d);
}

int main()
{

  int N;
  bool t[4][4][4][4] = {false};
  ll mod = 1e9 + 7, n[4][4][4] = {0}, sum = 0;

  REP(i, 4)
  {
    REP(j, 4)
    {
      REP(k, 4)
      {
        int cnt = 0;
        REP(l, 4)
        {
          if (check(i, j, k, l))
          {
            t[i][j][k][l] = true;
            cnt++;
          }
        }
        n[i][j][k] = cnt;
      }
    }
  }

  cin >> N;

  REP(a, N - 4)
  {
    ll p[4][4][4] = {0};
    REP(i, 4)
    {
      REP(j, 4)
      {
        REP(k, 4)
        {
          ll c = n[i][j][k];
          REP(l, 4)
          {
            if (t[i][j][k][l])
            {
              p[j][k][l] += c;
              p[j][k][l] %= mod;
            }
          }
        }
      }
    }
    REP(i, 4)
    {
      REP(j, 4)
      {
        REP(k, 4)
        {
          n[i][j][k] = p[i][j][k] % mod;
        }
      }
    }
  }

  REP(i, 4)
  {
    REP(j, 4)
    {
      REP(k, 4)
      {
        sum += n[i][j][k];
        sum %= mod;
      }
    }
  }

  cout << (N == 3 ? 61 : sum) << '\n';

  return 0;
}
