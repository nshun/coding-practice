// https://atcoder.jp/contests/abc092/tasks/arc093_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, a, la = 0, A[100001], sum = 0;

int main()
{
  cin >> N;
  A[0] = 0;
  REP(i, N)
  {
    cin >> a;
    A[i + 1] = a;
    sum += abs(la - a);
    la = a;
  }
  A[N + 1] = 0;
  sum += abs(A[N]);

  REP(i, N)
  {
    ll c = sum - (abs(A[i] - A[i + 1]) + abs(A[i + 1] - A[i + 2])) + abs(A[i] - A[i + 2]);
    cout << c << '\n';
  }

  return 0;
}
