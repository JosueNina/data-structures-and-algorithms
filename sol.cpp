#include <bits/stdc++.h>
#include "logger/logger.h"

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  log(q);
  stack<int> s;
  s.push(1);
  s.push(3);
  s.push(5);
  log(s);
  priority_queue<int> p;
  p.push(1);
  p.push(-1);
  p.push(-5);
  p.push(10);
  p.push(12);
  log(p);
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(1);
  pq.push(-1);
  pq.push(-5);
  pq.push(10);
  pq.push(12);
  log(pq);
  return 0;
}