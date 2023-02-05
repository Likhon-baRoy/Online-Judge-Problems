// https://www.hackerrank.com/challenges/kangaroo/problem

/* Problem Explanation:
 * https://www.youtube.com/watch?v=52R2pLDjUBw&list=PLSIpQf0NbcCltzNFrOJkQ4J4AAjW3TSmA
 */

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

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // char ch[10]; scanf(" %[^\n]", ch);
  // (A-Z)[65-90], (a-z)[97-122], (0-9)[48-57]

  int x1, x2, v1, v2;
  cin >> x1 >> v1 >> x2 >> v2;

  if ((v1 > v2) && (x1 - x2) % (v2 - v1) == 0)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
