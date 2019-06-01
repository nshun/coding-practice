// https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_d

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
  int N, a, b, C[10000] = {0}, cnt[10000], p[10000];
  vector<pll> ab;
  priority_queue<pll, vector<pll>, less<pll>> pq;

  cin >> N;
  REP(i, N - 1)
  {
    
    cin >> a >> b;
    ab.push_back(make_pair(a - 1, b - 1));
    cnt[a - 1]++;
    cnt[b - 1]++;
  }
  REP(i, N)
  {
    cin >> C[i];
  }

  sort(C, C + N);

  REP(i, N)
  {
    pq.push(make_pair(cnt[i], i));
  }

  int itr = 0;
  REP(i, N)
  {
    pll top = pq.top();
    p[top.second] = C[N - ++itr];
    pq.pop();
  }

  int score = 0;
  for (auto &e : ab)
  {
    score += min(p[e.first], p[e.second]);
  }

  cout << score << '\n';
  REP(i, N)
  {
    cout << p[i] << " ";
  }

  return 0;
}
