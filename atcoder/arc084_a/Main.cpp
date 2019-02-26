// https://atcoder.jp/contests/abc077/tasks/arc084_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, t, l, m, cnt;
vector<int> A, B, C;

int main()
{
  cin >> N;
  REP(i, N)
  {
    cin >> t;
    A.push_back(t);
  }
  REP(i, N)
  {
    cin >> t;
    B.push_back(t);
  }
  REP(i, N)
  {
    cin >> t;
    C.push_back(t);
  }
  sort(ALL(A));
  sort(ALL(B));
  sort(ALL(C));

  cnt = 0;
  l = m = 0;
  REP(i, N)
  {
    while (l < N && A[l] < B[i])
      l++;
    while (m < N && C[m] <= B[i])
      m++;
    cnt += l * (N - m);
  }

  cout << cnt << '\n';

  return 0;
}
