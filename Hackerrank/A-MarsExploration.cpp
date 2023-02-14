// https://www.hackerrank.com/challenges/mars-exploration/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s[i] != "SOS"[i % 3])
      cnt++;
  }

  cout << cnt << "\n";

  return 0;
}
