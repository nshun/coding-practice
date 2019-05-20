// https://atcoder.jp/contests/abc125/tasks/abc125_d

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
  ll N, t, minimize = INF, score = 0;
  bool mcnt = false;
  vector<ll> A(1e5);
  cin >> N;

  REP(i, N)
  {
    cin >> t;
    if (t < 0)
      mcnt = !mcnt;
    score += t = abs(t);
    minimize = min(minimize, t);
  }

  if (mcnt)
    score -= 2 * minimize;

  cout << score << '\n';

  return 0;
}
