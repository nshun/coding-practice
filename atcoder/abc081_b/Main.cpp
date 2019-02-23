// https://atcoder.jp/contests/abc081/tasks/abc081_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

bool divide(vector<int> &v)
{
  for (auto itr = v.begin(); itr != v.end(); ++itr)
  {
    if (*itr % 2 == 0)
      *itr = *itr >> 1;
    else
      return false;
  }
  return true;
}

int main()
{
  int n, cnt = 0;

  cin >> n;
  vector<int> a;

  REP(i, n)
  {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }

  while (divide(a))
    cnt++;

  cout << cnt << endl;

  return 0;
}
