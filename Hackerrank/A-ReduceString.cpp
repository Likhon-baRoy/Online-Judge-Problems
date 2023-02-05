// https://www.hackerrank.com/challenges/reduced-string/problem
#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

  string s;
  cin >> s;

  for (int i = 0; i < (((int)s.length()) - 1); i++) {
    if (s[i] == s[i + 1]) {
      s.erase(i, 2);
      i = -1;
    }
  }
  cout << (s.length() ? s : "Empty String");

  return 0;
}
