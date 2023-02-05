// https://www.hackerrank.com/challenges/between-two-sets/problem
#include <bits/stdc++.h>
using namespace std;

// Shortcuts for "common" data type
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 100'00'00'000;
#define TT                                                                     \
  scanf("%d", &T);                                                             \
  while (T--)
#define zep(i, a, b) for (int(i) = (a); (i) <= (b); (i)++)
#define rep(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define precise cout << fixed << setprecision(4);
#define all(x) x.begin(), x.end()

void traverse(int *arr, int n) {
  rep(i, 0, n) printf("%d ", arr[i]);
  printf("\n");
}
int gcd(int u, int v) { // Euclid's algorithm
  if (u == 0)
    return v;
  if (v == 0)
    return u;

  int t;
  while (u > 0) {
    if (u < v) {
      t = u;
      u = v;
      v = t;
    }
    u -= v;
  }
  return v;
}
long long lcm(int a, int b) { // Least/Lowest Common Multiple
  return (a / gcd(a, b)) * b;
}

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

  int T, N, n;

  scanf("%d %d", &n, &N);
  int a[n], b[N];

  rep(i, 0, n) { scanf("%d", &a[i]); }
  rep(i, 0, N) { scanf("%d", &b[i]); }

  int l = a[0];
  rep(i, 1, n) l = lcm(l, a[i]);

  int g = b[0];
  rep(i, 1, N) g = gcd(g, b[i]);

  int multiple = 0, count = 0;
  while (multiple <= g) {
    multiple += l;
    if (g % multiple == 0) {
      count++;
    }
  }
  printf("%d\n", count);

  return 0;
}

// Another Solution could be...

/*
  int getTotalX(vector<int> a, vector<int> b) {
  int c = 0;
  for (int i = a.back(); i <= b.front(); i+=a.back()) {
  bool g = true;
  for (int j : a) if (i % j != 0) g = false;
  for (int j : b) if (j % i != 0) g = false;
  if (g) ++c;
  }
  return c;
  }
*/
