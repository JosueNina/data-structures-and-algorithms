#include <bits/stdc++.h>
#include "logger/logger.h"

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  //testing logger
  vector<set<pair<int, int>>> a = {{{1, 2}, {1, 2}}, {{-1, -1}}};
  vector<vector<int>> graph = {{1, 2, 3}, {4, 5}, {1}};
  log(a);
  log(graph);
  return 0;
}