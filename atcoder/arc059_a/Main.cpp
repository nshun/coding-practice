// https://atcoder.jp/contests/abc043/tasks/arc059_a

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

  int sum = 0;
  vector<int> a;
  REP(i, n)
  {
    int ai;
    cin >> ai;
    sum += ai;
    a.push_back(ai);
  }

  int m = round((double)sum / n);

  int csum = 0;
  REP(i, n)
  {
    csum += powf(m - a[i], 2);
  }

  cout << csum << '\n';

  return 0;
}
