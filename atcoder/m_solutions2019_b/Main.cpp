// https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_b

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
  string S;
  int win = 0, remain = 15;
  cin >> S;

  for (auto &c : S)
  {
    remain--;
    if (c == 'o')
      win++;
  }

  if (7 < remain + win)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';

  return 0;
}
