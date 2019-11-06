// https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/0000000000088231

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

vector<ll> split_digit(string n)
{
  vector<ll> digits;
  while (0 < n)
  {
    digits.pb(n % 10);
    n /= 10;
  }
  reverse(ALL(digits));
  return digits;
}

pll solve(string N)
{
  ll a, b;
  a = N / 2;
  b = N - a;

  auto A = split_digit(a), B = split_digit(b);
  auto itrA = find(ALL(A), 4), itrB = find(ALL(B), 4);
  while (itrA != A.end() || itrB != B.end())
  {
    if (itrA != A.end())
    {
      ll diff = pow(10, A.end() - itrA - 1);
      a += diff;
      b -= diff;
    }
    else
    {
      ll diff = pow(10, itrB - B.begin());
      a += diff;
      b -= diff;
    }
    A = split_digit(a), B = split_digit(b);
    itrA = find(ALL(A), 4), itrB = find(ALL(B), 4);
  }
  return mp(a, b);
}

int main()
{
  ll T;
  string N;
  cin >> T;

  vector<pll> R(T);
  rep(i, T)
  {
    cin >> N;
    R[i] = solve(N);
  }

  rep(i, T)
  {
    cout << "Case #" << i + 1 << ": " << R[i].F << " " << R[i].S << '\n';
  }

  return 0;
}
