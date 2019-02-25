// https://atcoder.jp/contests/abc045/tasks/arc061_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

int main()
{
  string s;
  cin >> s;

  ll r = 0;
  int l = s.length() - 1;
  int m = powf(2, l);
  REP(i, m)
  {
    ll sum = 0,
       num = s[0] - '0';
    REP(j, l)
    {
      if (i >> j & 1)
      {
        sum += num;
        num = 0;
      }
      num = num * 10 + (s[j + 1] - '0');
    }
    r += (sum + num);
  }

  cout << r << '\n';

  return 0;
}
