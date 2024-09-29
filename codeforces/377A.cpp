#include <bits/stdc++.h>

using namespace std;

vector<int> d_i = {-1, 0, 1, 0};
vector<int> d_j = {0, 1, 0, -1};
vector<vector<char>> a;
vector<vector<int>> visited;
int cnt = 0;
int n, m, nm;

void dfs(int x, int y) {
  if (cnt <= 0) return;
  visited[x][y] = 1;
  for (int i = 0; i < 4; i++) {
    int new_i = x + d_i[i];
    int new_j = y + d_j[i];
    if (new_i >= n || new_i < 0 || new_j >= m || new_j < 0) continue;
    if (a[new_i][new_j] == '#') continue;
    if (!visited[new_i][new_j]) {
      cnt--;
      dfs(new_i, new_j);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m >> nm;
  int posx = 0;
  int posy = 0;
  a.assign(n, vector<char>(m));
  visited.assign(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (a[i][j] == '.') {
        cnt++;
        posx = i;
        posy = j;
      }
    }
  }
  cnt = cnt - nm;
  dfs(posx, posy);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == '#' || visited[i][j] || nm <= 0) continue;
      a[i][j] = 'X';
      nm--;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a[i][j];
    }
    cout << '\n';
  }
  return 0;
}

//https://codeforces.com/problemset/problem/377/A