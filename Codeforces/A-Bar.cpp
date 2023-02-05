// https://codeforces.com/contest/56/problem/A
#include <bits/stdc++.h>
using namespace std;

// Shortcuts for "common" data type
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 100'00'00'000;
#define TT                                                                     \
  int T;                                                                       \
  scanf("%d", &T);                                                             \
  while (T--)
#define zep(i, a, b) for (int(i) = (a); (i) <= (b); (i)++)
#define rep(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define precise cout << fixed << setprecision(4);
#define all(x) x.begin(), x.end()

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  // char ch[10]; scanf(" %[^\n]", ch);
  // (A-Z)[65-90], (a-z)[97-122], (0-9)[48-57]

  string s[] = {"ABSINTH", "BEER",    "BRANDY", "CHAMPAGNE", "GIN", "RUM",
                "SAKE",    "TEQUILA", "VODKA",  "WHISKEY",   "WINE"};

  // unordered_set<string> s;
  // s.insert("VODKA");
  // s.insert("WHISKEY");
  // s.insert("WINE");
  // s.insert("TEQUILA");
  // s.insert("SAKE");
  // s.insert("RUM");
  // s.insert("GIN");
  // s.insert("CHAMPAGNE");
  // s.insert("BEER");
  // s.insert("BRANDY");
  // s.insert("ABSINTH");

  int n;
  cin >> n;

  int cnt = 0;
  while (n--) {
    string str;
    cin >> str;
    if (!isalpha(str[0])) {
      if (stoi(str) < 18)
        cnt++;
    } else {
      rep(i, 0, 11) {
        if (s[i] == str) {
          cnt++;
        }
      }
    }
    // use this when you're using: unordered_set<string> s;
    // else if (s.find(str) != s.end()) cnt++;
  }
  cout << cnt << "\n";

  return 0;
}
