// https://atcoder.jp/contests/abc097/tasks/arc097_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int l, K;
string s;
set<string> p;
set<char> sc;

int main()
{
  cin >> s >> K;
  l = s.length();
  REP(i, l)
  {
    sc.insert(s[i]);
  }

  for (auto &scc : sc)
  {
    if (K <= p.size())
      break;
    REP(i, l)
    {
      if (s[i] == scc)
      {
        FOR(j, 1, min(l - i, K) + 1)
        {
          p.insert(s.substr(i, j));
        }
      }
    }
  }

  int i = 0;
  for (auto &q : p)
  {
    i++;
    if (i == K)
    {
      cout << q << '\n';
      break;
    }
  }

  return 0;
}
