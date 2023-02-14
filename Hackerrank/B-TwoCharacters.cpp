// https://www.hackerrank.com/challenges/two-characters/problem

/*

  #+ATHOUR: Likhon Barai
  #+EMAIL:  <likhonhere007@gmail.com>

*/

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

// Shortcuts for "common" data type
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define rep(i, a, b) for (int i{a}; i < b; ++i)
#define dep(i, a, b) for (int i{a}; i >= b; --i)
#define zep(i, a, b) for (int i{a}; i <= b; ++i)
#define vout(x)                                                         \
  for (auto &i : x)                                                            \
    cout << i << " ";                                                          \
  cout << "\n";
#define out(a, n)                                                              \
  for (int i = 0; i < n; i++)                                                  \
    cout << a[i] << " ";                                                       \
  cout << "\n";
inline int gcd(int a, int b) {
  if (b)
    while ((a %= b) && (b %= a))
      ;
  return (a + b);
}
#define TT                                                                     \
  int T;                                                                       \
  scanf("%d", &T);                                                             \
  while (T--)
#define precise cout << fixed << setprecision(4);
#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define str_unique(s) s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1 s.erase(unique(s.begin(), s.end()), s.end());
#define int_length(x) to_string(x).length()
#define all(x) x.begin(), x.end()
#define pb push_back
#define INF 100'00'00'000;
const int sz = 1e6 + 5;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
  _;
  // (A-Z)[65-90], (a-z)[97-122], (0-9)[48-57]

  int n;
  string s;
  cin >> n >> s;

  int ch[26] = {0};

  rep(i, 0, n) { ch[s[i] - 'a']++; }

  string t = "";
  rep(i, 0, 26) if (ch[i] != 0) t += (i + 'a');

  int f, m = 0;
  rep(i, 0, t.size() - 1) {
    rep(j, (i + 1), t.size()) {
      char x = t[i];
      char y = t[j];
      string r = "";
      rep(k, 0, n) {
        if (x == s[k] || y == s[k]) {
          r += s[k];
        }
      }

      f = 1;
      rep(l, 0, (int)r.size() - 1) {
        if (r[l] == r[l + 1]) {
          f = 0;
          break;
        }
      }

      if (f && r.size() > 1) {
        m = max(m, (int)r.size());
      }
    }
  }

  cout << m << "\n";

  return 0;
}

/*========================
  More Optimized Solution
  ========================*/

int n;
string s;
cin >> n >> s;

/* Edge case */
if (n <= 1) {
  cout << 0 << "\n";
  return 0;
}

const int N = 26;
/* Create arrays representing the 26^2 subproblems */
int pair[N][N] = {{0}, {0}}, count[N][N] = {{0}, {0}};
rep(i, 0, n) {
  char letter = s[i];
  int letterNum = letter - 'a';

  /* Update row */
  rep(j, 0, N) {
    if (pair[letterNum][j] == letter) {
      count[letterNum][j] = -1;
    }
    if (count[letterNum][j] != -1) {
      pair[letterNum][j] = letter;
      count[letterNum][j]++;
    }
  }

  /* Update column */
  rep(k, 0, N) {
    if (pair[k][letterNum] == letter) {
      count[k][letterNum] = -1;
    }
    if (count[k][letterNum] != -1) {
      pair[k][letterNum] = letter;
      count[k][letterNum]++;
    }
  }
}

/* Find max in "count" array */
int mx = 0;
rep(row, 0, N) {
  rep(col, 0, N) { mx = max(mx, count[row][col]); }
}
cout << mx << "\n";

return 0;
}
