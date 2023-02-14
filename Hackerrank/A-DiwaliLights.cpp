// https://www.hackerrank.com/challenges/diwali-lights/problem

#include <bits/stdc++.h>
using namespace std;

#define TT                                                              \
  int T;                                                                \
  cin >> T;                                                              \
  while (T--)

int main() {
  int n;
  long long mod;
  TT {
    cin >> n;

    // Permutation of n is: (2^n) - 1;
    for (int i = 0; i < n; i++) {
      mod = (mod * 2) % (int)1e5;
      // mod after each multiplication so that the variable don't go beyond it's
      // range
    }
    cout << mod - 1 << "\n";
    mod = 1;
  }
  /*
    Why is the mod 100000 important here? Is it just because the problem asks
    for it in that form, or is there some mathematical reason?

    Both. as given in question the value is 100000, it could be something else
    but some value is required for mod operation because the number gets too
    large to be stored in moemory after calculations.
  */
  return 0;
}
