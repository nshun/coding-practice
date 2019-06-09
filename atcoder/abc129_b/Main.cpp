// https://atcoder.jp/contests/

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
  int N, w, sum = 0, t, minimum;
  vector<int> W;
  cin >> N;
  REP(i, N)
  {
    cin >> w;
    sum += w;
    W.push_back(sum);
  }

  minimum = sum;
  REP(i, N)
  {
    minimum = min(minimum, abs(sum - W[i] * 2));
  }
  cout << minimum << '\n';

  return 0;
}
