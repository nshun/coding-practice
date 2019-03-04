// https://atcoder.jp/contests/abc098/tasks/arc098_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, r, c;
string S;

int main()
{
  cin >> N >> S;
  r = c = count(ALL(S), 'E');
  REP(i, N)
  {
    if (S[i] == 'E')
      r = min(r, --c);
    else
      r = min(r, c++);
  }

  cout << r << '\n';

  return 0;
}
