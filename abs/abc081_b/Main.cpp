// https://atcoder.jp/contests/abs/tasks/abc081_b
#include <iostream>
#include <vector>
using namespace std;

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
  for (size_t i = 0; i < n; i++)
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
