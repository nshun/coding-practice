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

bool checkL(vector<int> on, int p, set<int> s)
{
  int cnt = 0;
  for (auto &o : on)
    if (s.find(o) != s.end())
      cnt++;
  return cnt % 2 == p;
}

bool checkLL(int M, vector<int> on, vector<int> pp, vector<set<int>> ss)
{
  REP(i, M)
  {
    if (!checkL(on, pp[i], ss[i]))
      return false;
  }
  return true;
}

int main()
{
  int N, M, k, s, p, result = 0;
  cin >> N >> M;

  vector<int> pp;
  vector<set<int>> ss;

  REP(i, M)
  {
    set<int> sst;
    cin >> k;
    REP(j, k)
    {
      cin >> s;
      sst.insert(s);
    }
    ss.push_back(sst);
  }
  REP(i, M)
  {
    cin >> p;
    pp.push_back(p);
  }

  REP(bit, 1 << N)
  {
    vector<int> on;
    REP(i, M)
    {
      if (bit & (1 << i))
        on.push_back(i + 1);
    }
    if (checkLL(M, on, pp, ss))
      result++;
  }

  cout << result << '\n';

  return 0;
}
