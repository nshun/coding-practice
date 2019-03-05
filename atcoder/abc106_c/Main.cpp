// https://atcoder.jp/contests/abc106/tasks/abc106_c

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

string S;
ll K, r;

int main()
{
  cin >> S >> K;

  int i = 0;
  while (i < min(K - 1, (ll)S.length()) && '1' == S[i])
    i++;
  r = S[i] - '0';

  cout << r << '\n';

  return 0;
}
