// https://atcoder.jp/contests/abc072/tasks/arc082_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int N, ai;
vector<int> a;

int main()
{
  REP(i, 100003)
  {
    a.push_back(0);
  }

  cin >> N;
  REP(i, N)
  {
    cin >> ai;
    a[ai]++;
    a[ai + 1]++;
    a[ai + 2]++;
  }

  sort(ALL(a));

  cout << a.back() << '\n';

  return 0;
}
