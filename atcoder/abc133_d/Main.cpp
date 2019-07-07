// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define FORR(i, m, n) for (int(i) = (n); (i) >= (m); i--)
#define rep(...) _overload3(__VA_ARGS__, FOR, REP, )(__VA_ARGS__)
#define repr(...) _overload3(__VA_ARGS__, FORR, REPR, )(__VA_ARGS__)
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main()
{
  ll N, sum = 0;
  cin >> N;

  vector<ll> A(N), S(N), B(N);

  rep(i, N)
  {
    cin >> A[i];
    S[i] += A[i];
    S[(N + i + 1) % N] += A[i];
    sum += A[i];
  }

  ll added = 0;
  while (added < sum)
  {
    int i = max_element(ALL(S)) - S.begin();
    B[i] += 2;
    S[i]--;
    added += 2;
  }

  rep(i, N)
  {
    cout << B[i] << " ";
  }
  cout << '\n';

  return 0;
}
