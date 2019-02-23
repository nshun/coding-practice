// https://atcoder.jp/contests/abc088/tasks/abc088_b

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
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int n, ai, aT = 0, bT = 0;
  vector<int> a;

  cin >> n;
  while (n--)
  {
    cin >> ai;
    a.push_back(ai);
  }

  sort(a.begin(), a.end(), greater<int>());

  bool turn_a = true;
  for (auto &x : a)
  {
    if (turn_a)
      aT += x;
    else
      bT += x;
    turn_a = !turn_a;
  }

  cout << (aT - bT) << '\n';

  return 0;
}
