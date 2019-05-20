// https://atcoder.jp/contests/abc125/tasks/abc125_b

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
  int N, t, score = 0;
  vector<int> V(50);
  cin >> N;

  REP(i, N)
  {
    cin >> V[i];
  }

  REP(i, N)
  {
    cin >> t;
    score += max(0, V[i] - t);
  }

  cout << score << '\n';

  return 0;
}
