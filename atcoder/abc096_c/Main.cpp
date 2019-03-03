// https://atcoder.jp/contests/abc096/tasks/abc096_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int H, W;
string s, ls, ns, es;
bool r = true;

bool chk(int i)
{
  if (ls[i] == '#' || ns[i] == '#')
    return true;
  else if (0 < i && s[i - 1] == '#')
    return true;
  else if (i < W - 1 && s[i + 1] == '#')
    return true;
  else
    return false;
}

int main()
{
  es = "";
  cin >> H >> W;
  REP(i, W)
  {
    es += '.';
  }
  ls = s = es;
  REP(i, H)
  {
    cin >> ns;
    REP(j, W)
    {
      if (r && s[j] == '#')
        r = chk(j);
    }
    ls = s;
    s = ns;
  }
  ns = es;
  REP(i, W)
  {
    if (r && s[i] == '#')
      r = chk(i);
  }

  cout << (r ? "Yes" : "No") << '\n';

  return 0;
}
