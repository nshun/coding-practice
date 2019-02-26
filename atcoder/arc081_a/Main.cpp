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

ll N, A, h, w;
unordered_map<ll, ll> s;

int main()
{
  h = w = 0;

  cin >> N;
  REP(i, N)
  {
    cin >> A;
    if (s.count(A) == 0)
      s[A] = 1;
    else
      s[A]++;
  }

  for (auto &i : s)
  {
    ll k = i.first, v = i.second;
    if (w < k)
    {
      if (4 <= v)
      {
        w = k;
        h = max(h, k);
      }
      else if (2 <= v)
      {
        w = k;
        if (h < w)
          swap(h, w);
      }
    }
  }

  cout << h * w << '\n';

  return 0;
}
