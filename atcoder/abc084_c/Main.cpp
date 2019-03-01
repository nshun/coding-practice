// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int N, C, S, F, T[500] = {0};

int main()
{
  cin >> N;

  REP(i, N - 1)
  {
    cin >> C >> S >> F;
    T[i] = S + C;
    REP(j, i)
    {
      T[j] = (S < T[j] ? S + (int)((T[j] - S + F - 1) / F) * F : S) + C;
    }
  }

  REP(i, N)
  {
    cout << T[i] << '\n';
  }

  return 0;
}
