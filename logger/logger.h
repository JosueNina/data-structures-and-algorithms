#pragma once
#include <bits/stdc++.h>

using namespace std;

//prototypes

//simple value
template<typename T>
void _log(const T& value);
//pair
template<typename T1, typename T2>
void _log(const pair<T1, T2>& p);
//vector
template<typename T>
void _log(const vector<T>& v);
//set
template<typename T>
void _log(const set<T>& t);
//queue
template<typename T>
void _log(queue<T> q);
//stack
template<typename T>
void _log(stack<T> s);
//priority_queue (heap - max)
template<typename T>
void _log(priority_queue<T> p);
//priority_queue (heap - min)
template<typename T>
void _log(priority_queue<T, vector<T>, greater<T>> p);


//Simple value
template<typename T>
void _log(const T& value) {
  cout << value;
}

//pair
template<typename T1, typename T2>
void _log(const pair<T1, T2>& p) {
  cout << "(";
  _log(p.first);
  cout << ", ";
  _log(p.second);
  cout << ")";
}

//vector
template<typename T>
void _log(const vector<T>& v) {
  int n = v.size();
  cout << "[";
  for (int i = 0; i < n; i++) {
    _log(v[i]);
    if (i < n - 1) {
      cout << ", ";
    }
  }
  cout << "]";
}

//set
template<typename T>
void _log(const set<T>& t) {
  cout << "{";
  for (auto it = t.begin(); it != t.end(); it++) {
    _log(*it);
    if (next(it) != t.end()) {
      cout << ", ";
    }
  }
  cout << "}";
}

//queue
template<typename T>
void _log(queue<T> q) {
  cout << "<< ";
  while (!q.empty()) {
    _log(q.front());
    q.pop();
    if (!q.empty()) {
      cout << " -> ";
    }
  }
  cout << " >>";
}

//stack
template<typename T>
void _log(stack<T> s) {
  cout << "<< ";
  while (!s.empty()) {
    _log(s.top());
    s.pop();
    if (!s.empty()) {
      cout << " -> ";
    }
  }
  cout << " >>";
}

//priority_queue (heap)
template<typename T>
void _log(priority_queue<T> p) {
  cout << "<< ";
  while (!p.empty()) {
    _log(p.top());
    p.pop();
    if (!p.empty()) {
      cout << " -> ";
    }
  }
  cout << " >>";
}

//priority_queue (heap - min)
template<typename T>
void _log(priority_queue<T, vector<T>, greater<T>> p) {
  cout << "<< ";
  while (!p.empty()) {
    _log(p.top());
    p.pop();
    if (!p.empty()) {
      cout << " -> ";
    }
  }
  cout << " >>";
}

template<typename T>
void log(const T& value) {
  _log(value);
  cout << endl;
}