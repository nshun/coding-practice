// https://atcoder.jp/contests/abc047/tasks/arc063_a

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

  int cnt = -1;
  char l = 'S';
  for (char &c : s)
  {
    if (c != l)
    {
      l = c;
      cnt++;
    }
  }

  cout << cnt << '\n';

  return 0;
}
