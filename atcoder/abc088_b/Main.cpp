// https://atcoder.jp/contests/abs/tasks/abc088_b
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n,
      ai,
      aT = 0,
      bT = 0;

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

  cout << (aT - bT) << endl;

  return 0;
}
