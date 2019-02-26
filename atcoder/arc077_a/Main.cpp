// https://atcoder.jp/contests/abc066/tasks/arc077_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll n, a;
deque<ll> lst;

int main()
{
  cin >> n;
  REP(i, n)
  {
    cin >> a;
    if (i % 2 == 0)
      lst.push_front(a);
    else
      lst.push_back(a);
  }

  if (n % 2 == 0)
    reverse(ALL(lst));

  for (auto &it : lst)
    cout << it << " ";

  cout << '\n';

  return 0;
}
