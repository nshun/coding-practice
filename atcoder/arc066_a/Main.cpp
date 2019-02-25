// https://atcoder.jp/contests/abc050/tasks/arc066_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

ll N, A, cnt;
vector<int> c;

int main()
{
  cin >> N;

  REP(i, N)
  {
    c.push_back(0);
  }
  REP(i, N)
  {
    cin >> A;
    c[A]++;
  }

  cnt = 1;
  bool f = c[0] == N % 2;
  FOR(i, 1, N)
  {
    if (!f)
      break;
    else if (i % 2 != N % 2)
    {
      if (c[i] == 2)
        cnt = (cnt * 2) % (ll)(pow(10, 9) + 7);
      else
        f = false;
    }
    else if (c[i] != 0)
      f = false;
  }

  cout << (f ? cnt : 0) << '\n';

  return 0;
}
