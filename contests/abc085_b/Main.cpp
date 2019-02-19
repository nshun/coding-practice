// https://atcoder.jp/contests/abs/tasks/abc085_b
#include <iostream>
#include <set>
using namespace std;

int main()
{
  int n, di;
  set<int> d;

  cin >> n;
  while (n--)
  {
    cin >> di;
    d.insert(di);
  }

  cout << d.size() << endl;

  return 0;
}
