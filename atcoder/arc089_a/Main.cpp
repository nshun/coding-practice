// https://atcoder.jp/contests/abc086/tasks/arc089_a
#include <iostream>
#include <cmath>

using namespace std;

int x = 0, y = 0, t = 0,
    px = 0, py = 0, pt = 0;
bool fault = false;

void move()
{
  int dt = t - pt,
      dx = abs(x - px),
      dy = abs(y - py);

  if (dt % 2 == (dx + dy) % 2 && dx + dy <= dt)
  {
    pt = t;
    px = x;
    py = y;
  }
  else
  {
    fault = true;
  }
  return;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  for (size_t i = 0; i < n; i++)
  {
    cin >> t >> x >> y;
    if (!fault)
      move();
  }

  string result = !fault ? "Yes" : "No";
  cout << result << "\n";

  return 0;
}
