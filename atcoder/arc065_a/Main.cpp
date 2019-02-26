// https://atcoder.jp/contests/abc049/tasks/arc065_a

#include <bits/stdc++.h>
#define REP(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define REPR(i, n) for (int(i) = (n); (i) >= 0; (i)--)
#define FOR(i, m, n) for (int(i) = (m); (i) < (n); i++)
#define INF 1e9
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;

string s, r, c[] = {"maerd", "remaerd", "esare", "resare"};
int l[] = {5, 7, 5, 6};

bool cut(string &s)
{
  bool r = false;
  REP(i, 4)
  {
    if (s.find(c[i]) == 0)
    {
      s = s.substr(l[i]);
      r = true;
    }
  }
  return r;
}

int main()
{
  cin >> s;
  reverse(ALL(s));

  while (0 < s.length())
    if (!cut(s))
      break;

  r = s.length() == 0 ? "YES" : "NO";

  cout << r << '\n';

  return 0;
}
