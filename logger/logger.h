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

template<typename T>
void log(const T& value) {
  _log(value);
  cout << endl;
}