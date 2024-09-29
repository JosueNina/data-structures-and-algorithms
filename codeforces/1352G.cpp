#include <bits/stdc++.h>

using namespace std;

vector<int> ans;
vector<int> visited;
vector<vector<int>> g;
int n;

void dfs(int u) {
  if (u < 0 || u > n) return;
  visited[u] = 1;
  ans.push_back(u);
  for (int v : g[u]) {
    if (!visited[v]) {
      dfs(v);
      break;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    cin >> n;
    g.assign(n + 1, vector<int>());
    visited.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      for (int j = 2; j <= 4; j++) {
        if (i - j > 0) {
          g[i].push_back(i - j);
          g[i - j].push_back(i);
        }
        if (i + j <= n) {
          g[i].push_back(i + j);
          g[i + j].push_back(i);
        }
      }
    }
    bool flag = false;
    for (int i = 1; i <= n; i++) {
      ans.clear();
      visited.assign(n + 1, 0);
      dfs(i);
      if (ans.size() == n) {
        flag = true;
        break;
      }
    }
    if (!flag) {
      cout << "-1\n";
    } else {
      for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
      }
      cout << '\n';
    }
  }
  return 0;
}

//https://codeforces.com/problemset/problem/1352/G