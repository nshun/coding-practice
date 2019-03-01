// https://atcoder.jp/contests/abc085/tasks/abc085_c
#include <iostream>
using namespace std;

void checkSet(int n, int y, int bill_set[3])
{
  for (size_t i = 0; i <= n; i++)
  {
    for (size_t j = 0; j <= n - i; j++)
    {
      int k = n - i - j;
      if (i * 10 + j * 5 + k == y / 1000)
      {
        bill_set[0] = i;
        bill_set[1] = j;
        bill_set[2] = k;
        return;
      }
    }
  }
  return;
}

int main()
{
  int n, y, // N, Y
      bill_set[3] = {-1, -1, -1};

  cin >> n >> y;

  checkSet(n, y, bill_set);

  cout << bill_set[0] << ' ' << bill_set[1] << ' ' << bill_set[2] << endl;

  return 0;
}
