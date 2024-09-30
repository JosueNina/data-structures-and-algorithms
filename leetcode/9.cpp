class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    long long rev = 0;
    long long temp = x;
    while (x) {
      int res = x % 10;
      rev *= 10;
      rev += res;
      x /= 10;
    }
    return temp == rev;
  }
};

//https://leetcode.com/problems/palindrome-number/
