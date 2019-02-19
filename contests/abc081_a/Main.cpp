// https://atcoder.jp/contests/abs/tasks/abc081_a
#include <iostream>
using namespace std;

int main()
{
  string ss;
  int cnt = 0;

  cin >> ss;

  for (int i = 0; i < (int)ss.size(); ++i)
  {
    if (ss[i] == '1')
      cnt++;
  }

  cout << cnt;

  return 0;
}
