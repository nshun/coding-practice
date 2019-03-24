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
  string S, atcg = "ATCG";
  cin >> S;

  ll m = 0, t = 0;

  for (auto &c : S)
  {
    if (atcg.find(c) != string::npos)
    {
      t++;
    }
    else
    {
      m = max(m, t);
      t = 0;
    }
  }

  cout << max(m, t) << '\n';

  return 0;
}
