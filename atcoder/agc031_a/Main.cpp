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

ll N, sum, M, cnt[26];
char S;

int main()
{
  M = 1e9 + 7;
  cin >> N;

  REP(i, N)
  {
    cin >> S;
    cnt[S - 'a']++;
  }

  sum = 1;
  REP(i, 26)
  {
    sum *= (cnt[i] + 1);
    sum %= M;
  }

  cout << sum - 1 << '\n';

  return 0;
}
