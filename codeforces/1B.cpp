#include <bits/stdc++.h>

using namespace std;

void solve1(string s) {
  int idx = 0;
  string bar = "";
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == 'C') {
      idx = i;
      break;
    }
    bar += s[i];
  }
  string foo = "";
  for (int i = idx + 1; i < s.size(); i++) {
    foo += s[i];
  }
  int val = stoi(foo);
  foo = "";
  int cur = 0;
  while (val) {
    int res = val % 26;
    if (res) {
      foo += (char)(res - 1 + 'A');
      cur = 0;
    } else {
      foo += 'Z';
      cur = 1;
    }
    val /= 26;
    val -= cur;
  }
  reverse(foo.begin(), foo.end());
  cout << foo << bar << '\n';
}

void solve2(string s) {
  int col = 0;
  string foo = "";
  string bar = "";
  for (int i = 0; i < s.size(); i++) {
    if ('A' <= s[i] && s[i] <='Z') {
      foo += s[i];
    } else {
      bar += s[i];
    }
  }
  reverse(foo.begin(), foo.end());
  int k = 1;
  for (int i = 0; i < foo.size(); i++) {
    col += (foo[i] - 'A' + 1) * k;
    k *= 26;
  }
  cout << 'R' << bar << 'C' << col << '\n';
}

bool check(string s) {
  bool flag = false;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'C') flag = true;
  }
  return (flag && s[0] == 'R' && isdigit(s[1]));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    if (check(s)) solve1(s);
    else solve2(s);
  }
  return 0;
}

//https://codeforces.com/problemset/problem/1/B