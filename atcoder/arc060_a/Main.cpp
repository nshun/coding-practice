// https://atcoder.jp/contests/abc044/tasks/arc060_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int main()
{
  int n, a;
  vector<int> x;
  cin >> n >> a;
  REP(i, n)
  {
    int xi;
    cin >> xi;
    x.push_back(xi);
  }

  ll cnt = 0, mm = pow(2, n);
  REP(i, mm)
  {
    int p = 0, sum = 0;
    REP(j, n)
    {
      if (i >> j & 1)
      {
        sum += x[j];
        p++;
      }
    }
    if ((double)sum / p == a)
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
