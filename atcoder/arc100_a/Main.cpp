// https://atcoder.jp/contests/abc102/tasks/arc100_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, A[200000], t, med, c;

int main()
{
  c = 0;
  cin >> N;
  REP(i, N)
  {
    cin >> t;
    A[i] = t - i - 1;
  }

  sort(A, A + N);
  med = N % 2 ? A[(N - 1) / 2] : (A[N / 2 - 1] + A[N / 2]) / 2;

  REP(i, N)
  {
    c += abs(A[i] - med);
  }

  cout << c << '\n';

  return 0;
}
