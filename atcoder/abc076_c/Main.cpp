// https://atcoder.jp/contests/abc076/tasks/abc076_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int p, s, k, l;
string S, Sd, T;

int main()
{
  cin >> Sd >> T;

  s = p = 0;
  k = T.length();
  l = Sd.length();
  reverse(ALL(T));
  reverse(ALL(Sd));
  REP(i, l)
  {
    if (Sd[i] == T[p] || Sd[i] == '?')
    {
      if (p == 0)
        s = i;
      p++;
      if (p == k)
        break;
    }
    else if (p != 0)
    {
      i -= p;
      p = 0;
    }
  }

  S = "";
  if (p == k)
  {
    REP(i, l)
    {
      S += s <= i && i < s + k ? T[i - s] : Sd[i] == '?' ? 'a' : Sd[i];
    }
    reverse(ALL(S));
  }
  else
    S = "UNRESTORABLE";

  cout << S << '\n';

  return 0;
}
