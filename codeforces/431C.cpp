#include <bits/stdc++.h>
  
using namespace std;
  
const int md = 1000000007;

int k, d;
int dp[105][2];

void add(int& a, int b) {
  a += b;
  if (a >= md) {
    a -= md;
  }
}
  
int solve(int n, int flag) {
  if (n == 0) return flag;
  if (n < 0) return false;
  if (dp[n][flag] != -1) return dp[n][flag];
  int ans = 0;
  for (int i = 1; i <= k; i++) {
    add(ans, solve(n - i, (i >= d) | flag));
  }
  dp[n][flag] = ans;
  return ans;
}
  
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n >> k >> d;
  for (int i = 0; i <= n; i++) {
    dp[i][0] = dp[i][1] = -1;
  }
  cout << solve(n, 0) << '\n';
  return 0;
}

//https://codeforces.com/problemset/problem/431/C