// https://atcoder.jp/contests/abc126/tasks/abc126_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using ld = long double;
using pll = pair<ll, ll>;

int main()
{
  int N, K, mm = 0;
  vector<int> a(18, 0);
  ll win = 0;

  cin >> N >> K;

  FOR(i, 1, N + 1)
  {
    int index = K <= i ? 0 : ceil(log2((double)K / i));
    mm = max(mm, index);
    a[index]++;
  }

  REP(i, mm + 1)
  {
    win *= 2;
    if (0 < a[i])
      win += a[i];
  }

  cout << fixed << setprecision(12) << win * pow(2, -1 * mm) / N << '\n';

  return 0;
}
