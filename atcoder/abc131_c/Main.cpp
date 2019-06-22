// https://atcoder.jp/contests/abc131/tasks/abc131_c

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

// 最大公約数
ll gcd(ll a, ll b)
{
  return b == 0 ? a : gcd(b, a % b);
}

// 最小公倍数
ll lcm(ll a, ll b)
{
  return a / gcd(a, b) * b;
}

int main()
{
  ll A, B, C, D, CD;
  cin >> A >> B >> C >> D;

  CD = lcm(C, D);
  ll cntC = B / C - (A + C - 1) / C + 1,
     cntD = B / D - (A + D - 1) / D + 1,
     cntCD = B / CD - (A + CD - 1) / CD + 1;

  cout << (B - A + 1) - (cntC + cntD - cntCD) << '\n';

  return 0;
}
