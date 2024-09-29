#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;
      if (u == x || v == x) {
        cnt++;
      }
    }
    if (cnt == 1 || n == 1) {
      cout << "Ayush\n";
    } else {
      if (n % 2 == 0) {
        cout << "Ayush\n";
      } else {
        cout << "Ashish\n";
      }
    }
  }
  return 0;
}

//https://codeforces.com/problemset/problem/1363/C