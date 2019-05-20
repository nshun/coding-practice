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

int cnt(bool s, string S)
{
  int r = 0;
  for (auto &c : S)
  {
    char t = s ? '0' : '1';
    if (t != c)
      r++;
    s = !s;
  }
  return r;
}

int main()
{
  string S;
  cin >> S;

  cout << min(cnt(true, S), cnt(false, S)) << '\n';

  return 0;
}
