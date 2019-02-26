// https://atcoder.jp/contests/abc071/tasks/arc081_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

ll N, A, l, c, p, hw[2] = {0, 0};
vector<ll> s;

int main()
{
  l = c = p = 0;

  cin >> N;
  REP(i, N)
  {
    cin >> A;
    s.push_back(A);
  }

  sort(ALL(s));
  reverse(ALL(s));

  for (auto &i : s)
  {
    if (l == i)
      c++;
    else
    {
      l = i;
      c = 1;
    }

    if (c == 2)
    {
      hw[p] = i;
      if (p == 1)
        break;
      p++;
      c = 0;
    }
  }

  cout << hw[0] * hw[1] << '\n';

  return 0;
}
