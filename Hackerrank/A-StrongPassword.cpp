// https://www.hackerrank.com/challenges/strong-password/problem
#include <bits/stdc++.h>
using namespace std;

// Shortcuts for "common" data type
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 100'00'00'000;
#define TT                                                              \
  int T;                                                                \
  scanf("%d", &T);                                                      \
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

  // char ch[10]; scanf(" %[^\n]", ch);
  // (A-Z)[65-90], (a-z)[97-122], (0-9)[48-57]

  int n;
  string str;
  char sym[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'};
  cin >> n >> str;

  int a = 0, b = 0, c = 0, d = 0, len = 12;
  for (int i = 0; i < n; i++) {
    if (str[i] >= 48 && str[i] <= 57)
      a = 1;
    if (str[i] >= 65 && str[i] <= 90)
      b = 1;
    if (str[i] >= 97 && str[i] <= 122)
      c = 1;
    rep(j, 0, len) {
      if (str[i] == sym[j])
        d = 1;
    }
  }

  int total = a + b + c + d, need = (4 - total), ans;

  if (n < 6) {
    int left = 6 - n;
    ans = (left < need) ? need : left;
  } else
    ans = need;

  printf("%d\n", ans);

  return 0;
}
