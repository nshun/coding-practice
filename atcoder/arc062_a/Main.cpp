// https://atcoder.jp/contests/abc046/tasks/arc062_a

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
  int n;
  cin >> n;

  ll t = 1, a = 1, ti, ai, mm;
  REP(i, n)
  {
    cin >> ti >> ai;

    mm = max(t / ti, a / ai);
    while (ti * mm < t || ai * mm < a)
      mm++;
    t = ti * mm;
    a = ai * mm;
  }

  cout << (t + a) << '\n';

  return 0;
}
