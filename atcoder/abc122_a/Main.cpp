// https://atcoder.jp/contests/abc122/tasks/abc122_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main()
{
  string b, r;
  r = "";
  cin >> b;

  for (auto &c : b)
  {
    switch (c)
    {
    case 'A':
      r += "T";
      break;
    case 'C':
      r += "G";
      break;
    case 'G':
      r += "C";
      break;
    case 'T':
      r += "A";
      break;
    default:
      break;
    }
  }

  cout << r << '\n';

  return 0;
}
