#include <bits/stdc++.h>

using namespace std;

int pb, ps, pc;
int nb, ns, nc;
vector<int> cnt;

long long getTotal(long long x) {
  long long total = max(0ll, (cnt[0] * x - nb) * pb);
  total += max(0ll, (cnt[1] * x - ns) * ps);
  total += max(0ll, (cnt[2] * x - nc) * pc);
  return total;
}

int main() {
  string s;
  cin >> s;
  cnt.assign(3, 0);
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'B') cnt[0]++;
    if (s[i] == 'S') cnt[1]++;
    if (s[i] == 'C') cnt[2]++;
  }
  cin >> nb >> ns >> nc;
  cin >> pb >> ps >> pc;
  long long r;
  cin >> r;
  long long ans = 0;
  long long left = 0;
  long long right = 1e15;
  while (left <= right) {
    long long mid = (left + right) / 2;
    if (getTotal(mid) <= r) {
      ans = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  cout << ans << '\n';
  return 0;
}

//https://codeforces.com/contest/371/problem/C