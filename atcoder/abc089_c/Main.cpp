// https://atcoder.jp/contests/abc089/tasks/abc089_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, m[5] = {0}, r = 0;
char I, S[10];

void add(int a, int b, int c)
{
  r += m[a] * m[b] * m[c];
}

int main()
{
  cin >> N;
  REP(i, N)
  {
    cin >> S;
    I = S[0];
    if (I == 'M')
      m[0]++;
    else if (I == 'A')
      m[1]++;
    else if (I == 'R')
      m[2]++;
    else if (I == 'C')
      m[3]++;
    else if (I == 'H')
      m[4]++;
  }

  REP(i, 5)
  {
    FOR(j, i + 1, 5)
    {
      FOR(k, j + 1, 5)
      {
        add(i, j, k);
      }
    }
  }

  cout << r << '\n';

  return 0;
}
