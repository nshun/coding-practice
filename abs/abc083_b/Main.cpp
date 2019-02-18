// https://atcoder.jp/contests/abs/tasks/abc083_b
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
  int n, a, b;
  int total = 0;

  cin >> n >> a >> b;

  for (size_t i = 0; i < n; i++)
  {
    int dig,
        sum = 0,
        num = i + 1;
    while (num)
    {
      int dig = num % 10;
      sum += dig;
      num /= 10;
    }
    if (a <= sum && sum <= b)
      total += (i + 1);
  }

  cout << total << endl;

  return 0;
}
