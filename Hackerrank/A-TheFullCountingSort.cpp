// https://www.hackerrank.com/challenges/countingsort4/problem
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

  int n, m, v;
  scanf("%d", &n);

  m = (n / 2);

  vector<vector<string>> arr(m);
  string str, res;

  int freq[n] = {0};

  rep(i, 0, m) {
    cin >> v >> str;
    freq[v]++;
    arr[v].push_back("-");
  }
  rep(i, m, n) {
    cin >> v >> str;
    freq[v]++;
    arr[v].push_back(str);
  }
  rep(i, 0, m) {
    rep(j, 0, freq[i]) { cout << arr[i][j] << "\n "; }
  }
  printf("\n");

  return 0;
}

/*
 *  Another one could be:
 */

#include <cstdio>
#include <iostream>
#include <vector>
#define MAX 1000001

using namespace std;

  int num;
  vector<int> cnt[101];
  string name[MAX];
  int val[MAX];
  int order[MAX];

  int main() {
  cin >> num;
  int stop = num / 2;
  int temp1;
  string temp2;
  for (int x = 0; x < num; x++) {
  cin >> temp1 >> temp2;
  val[x] = temp1;
  name[x] = temp2;
  cnt[temp1].push_back(x);
  }
  for (int x = 0; x < 100; x++) {
  for (vector<int>::iterator it = cnt[x].begin(); it != cnt[x].end(); ++it) {
  if ((*it) < stop)
  cout << "- ";
  else
  cout << name[*it] << " ";
  }
  }

  return 0;
  }
