// https://atcoder.jp/contests/abc119/tasks/abc119_b

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
  int n;
  cin >> n;

  double a = 380000, sum = 0;
  REP(i, n)
  {
    double x;
    string u;
    cin >> x >> u;
    sum += u == "BTC" ? x * a : x;
  }

  cout << sum << '\n';

  return 0;
}
