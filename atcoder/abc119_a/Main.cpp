// https://atcoder.jp/contests/

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

bool ch(int y, int m, int d)
{
  if (y == 2019)
  {
    if (m < 4)
      return true;
    else if (m == 4)
      return d < 31;
    else
      return false;
  }
  else
    return y < 2019;
}
int main()
{
  string s;
  cin >> s;

  int y = stoi(s.substr(0, 4)),
      m = stoi(s.substr(5, 2)),
      d = stoi(s.substr(8, 2));

  string r = ch(y, m, d) ? "Heisei" : "TBD";

  cout << r << '\n';

  return 0;
}
