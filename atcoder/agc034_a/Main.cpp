#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, A, B, C, D;
  string S;

  cin >> N >> A >> B >> C >> D;
  cin >> S;

  if (S.substr(A - 1, C - A + 1).find("##") == string::npos && S.substr(B - 1, D - B + 1).find("##") == string::npos)
    if (C < D)
      cout << "Yes" << '\n';
    else if (S.substr(B - 2, D - B + 3).find("...") != string::npos)
      cout << "Yes" << '\n';
    else
      cout << "No" << '\n';
  else
    cout << "No" << '\n';

  return 0;
}
