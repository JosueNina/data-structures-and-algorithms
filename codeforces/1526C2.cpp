#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  priority_queue<int> q;
  int cnt = 0;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (sum + x < 0) {
      if (q.empty()) continue;
      int top = -q.top();
      if (top < x) { 
        sum += x;
        sum -= top;
        q.pop();
        q.push(-x);
      }
    } else {
      sum += x;
      q.push(-x);
      cnt++;
    }
  }
  cout << cnt << '\n';
  return 0;
}

//https://codeforces.com/contest/1526/problem/C2