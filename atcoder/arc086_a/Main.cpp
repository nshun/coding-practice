// https://atcoder.jp/contests/abc081/tasks/arc086_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int N, K, A, s, r;
map<int, int> m;
vector<int> c;

int main()
{
  s = r = 0;
  cin >> N >> K;
  REP(i, N)
  {
    cin >> A;
    if (m.find(A) != m.end())
      m[A]++;
    else
    {
      m[A] = 1;
      s++;
    }
  }

  for (auto &p : m)
  {
    c.push_back(p.second);
  }

  sort(ALL(c));

  REP(i, max(0, s - K))
  {
    r += c[i];
  }

  cout << r << '\n';

  return 0;
}
