// https://atcoder.jp/contests/abc120/tasks/abc120_b

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
  int A, B, K;
  vector<int> m;
  cin >> A >> B >> K;
  FOR(i, 1, min(A, B) + 1)
  {
    if (A % i == 0 && B % i == 0)
      m.push_back(i);
  }
  reverse(ALL(m));

  cout << m[K - 1] << '\n';

  return 0;
}
