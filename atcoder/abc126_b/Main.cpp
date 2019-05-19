// https://atcoder.jp/contests/abc126/tasks/abc126_b

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
  int S, l, b;
  cin >> S;

  l = S % 100;
  b = S / 100;

  if (l == 0 || 12 < l)
  {
    if (0 < b && b <= 12)
      cout << "MMYY" << '\n';
    else
      cout << "NA" << '\n';
  }
  else
  {
    if (0 < b && b <= 12)
      cout << "AMBIGUOUS" << '\n';
    else
      cout << "YYMM" << '\n';
  }

  return 0;
}
