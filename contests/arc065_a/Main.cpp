// https://atcoder.jp/contests/abs/tasks/arc065_a
#include <iostream>
#include <stack>
using namespace std;

string s;
int goal;
string t[] = {"dream", "dreamer", "erase", "eraser"};
stack<int> st;
int l[] = {5, 7, 5, 6};

bool search(int point, int start = 0)
{
  if (point == goal)
    return true;

  for (size_t i = start; i < 4; i++)
  {
    if (t[i] == s.substr(point, l[i]))
    {
      st.push(i);
      return search(point + l[i]);
    }
  }

  if (st.empty())
    return false;
  else
  {
    int top = st.top();
    st.pop();
    return search(point - l[top], top + 1);
  }
}

int main()
{
  cin >> s;
  goal = s.length();

  bool result = search(0);

  if (result)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
