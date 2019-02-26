// https://atcoder.jp/contests/abc062/tasks/arc074_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll H, W, m;

vector<ll> pc(vector<ll> mc, ll p)
{
  mc.push_back(p);
  return mc;
}

void cut(ll h, ll w, vector<ll> c)
{
  ll s = c.size();
  if (s == 2)
  {
    c.push_back(h * w);
    sort(ALL(c));
    m = min(m, c[2] - c[0]);
  }
  else
  {
    ll ch = h / (3 - s), cw = w / (3 - s);
    if (0 < ch)
      cut(h - ch, w, pc(c, ch * w));
    if (0 < cw)
      cut(h, w - cw, pc(c, cw * h));
    if (h % (3 - s) != 0)
      cut(h - (ch + 1), w, pc(c, (ch + 1) * w));
    if (w % (3 - s) != 0)
      cut(h, w - (cw + 1), pc(c, (cw + 1) * h));
  }
  return;
}

int main()
{
  m = INF;
  cin >> H >> W;

  cut(H, W, {});

  cout << m << '\n';

  return 0;
}
