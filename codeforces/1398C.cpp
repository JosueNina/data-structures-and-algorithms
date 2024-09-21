#include <bits/stdc++.h>
  
using namespace std;
  
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<int, int> mp;
    mp[0]++;
    long long ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += (s[i] - '0') - 1;
      ans += mp[sum]++;
    }
    cout << ans << '\n';
  }
  return 0;
}

//https://codeforces.com/contest/1398/problem/C