// https://atcoder.jp/contests/abc073/tasks/abc073_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, A;
set<ll> s;

int main()
{
  cin >> N;
  REP(i, N)
  {
    cin >> A;
    auto r = s.insert(A);
    if (!r.second)
      s.erase(A);
  }

  cout << s.size() << '\n';

  return 0;
}
