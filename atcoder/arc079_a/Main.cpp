// https://atcoder.jp/contests/abc068/tasks/arc079_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, M, a, b;
vector<bool> s, g;
string r;

int main()
{
  cin >> N >> M;

  REP(i, N)
  {
    s.push_back(false);
    g.push_back(false);
  }

  REP(i, M)
  {
    cin >> a >> b;
    if (a == 1)
      s[b - 1] = true;
    if (b == N)
      g[a - 1] = true;
  }

  r = "IMPOSSIBLE";
  REP(i, N)
  {
    if (s[i] == true && g[i] == true)
    {
      r = "POSSIBLE";
      break;
    }
  }

  cout << r << '\n';

  return 0;
}
