// https://atcoder.jp/contests/abs/tasks/abc087_b
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a, b, c, x;
  int cnt = 0;

  cin >> a; // 500
  cin >> b; // 100
  cin >> c; //  50
  cin >> x; // TOTAL

  for (size_t i = 0; i < a + 1; i++)
  {
    for (size_t j = 0; j < b + 1; j++)
    {
      int total = i * 500 + j * 100;
      for (size_t k = 0; k < c + 1; k++)
      {
        if (total + k * 50 == x)
          cnt++;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
