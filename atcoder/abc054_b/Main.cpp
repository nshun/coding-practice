// https://atcoder.jp/contests/abc054/tasks/abc054_b

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

bool match(int x, int y, vector<string> &a, vector<string> &b)
{
  int n = a.size();
  int m = b.size();
  FOR(i, x, x + m)
  {
    FOR(j, y, y + m)
    {
      if (a[i][j] != b[i - x][j - y])
        return false;
    }
  }
  return true;
}

string search(vector<string> &a, vector<string> &b)
{
  int n = a.size();
  int m = b.size();

  REP(i, n - m + 1)
  {
    REP(j, n - m + 1)
    {
      if (match(i, j, a, b))
        return "Yes";
    }
  }
  return "No";
}

int main()
{
  /* Magic word */
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  /* ---------- */

  int n, m;
  string ai, bi, r;
  vector<string> a, b;

  cin >> n >> m;

  REP(i, n)
  {
    cin >> ai;
    a.push_back(ai);
  }

  REP(i, m)
  {
    cin >> bi;
    b.push_back(bi);
  }

  cout << search(a, b) << '\n';

  return 0;
}
