#include <bits/stdc++.h>

using namespace std;

vector<int> total;
vector<int> visited;
vector<vector<int>> g;

int dfs(int u, int dist) {
  visited[u] = 1;
  int size = 1;
  for (int v : g[u]) {
    if (!visited[v]) {
      visited[v] = 1;
      size += dfs(v, dist + 1);
    }
  }
  total[u] = dist - size + 1;
  return size;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  visited.assign(n, 0);
  total.assign(n, 0);
  g.assign(n, vector<int>());
  for (int i = 0; i < n - 1; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  dfs(0, 0);
  sort(total.rbegin(), total.rend());
  long long ans = 0;
  for (int i = 0; i < k; i++) {
    ans += total[i];
  }
  cout << ans << '\n';
  return 0;
}

//https://codeforces.com/problemset/problem/1336/A