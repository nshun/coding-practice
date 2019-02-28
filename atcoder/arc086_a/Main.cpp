// https://atcoder.jp/contests/abc081/tasks/arc086_a

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
  int N, K, A, m[200000] = {0}, r = 0;

  cin >> N >> K;

  REP(i, N)
  {
    cin >> A;
    m[A - 1]++;
  }
  sort(m, m + 200000, greater<int>());

  FOR(i, K, 200000)
  {
    if (m[i] == 0)
      break;
    r += m[i];
  }

  cout << r << '\n';

  return 0;
}
