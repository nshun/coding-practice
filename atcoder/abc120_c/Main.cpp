// https://atcoder.jp/contests/abc120/tasks/abc120_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

string S;
int cnt = 0, r = 0, l = 0;
char n;

int ss(int p)
{
  if (p == l)
    return r;

  if (cnt == 0)
  {
    n = S[p];
    cnt = 1;
  }
  else
  {
    if (n == S[p])
    {
      cnt++;
    }
    else
    {
      cnt--;
      r++;
    }
  }
  return ss(p + 1);
}

int main()
{
  cin >> S;
  l = S.length();

  cout << ss(0) * 2 << '\n';

  return 0;
}
