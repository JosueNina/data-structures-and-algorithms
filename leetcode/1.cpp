class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> a;
    for (int i = 0; i < nums.size(); i++) {
      a.emplace_back(nums[i], i);
    }
    sort(a.begin(), a.end());
    int i = 0;
    int j = a.size() - 1;
    while (i < j) {
      if (a[i].first + a[j].first == target) {
        return {a[i].second, a[j].second};
      }
      if (a[i].first + a[j].first < target) {
        i++;
      } else {
        j--;
      }
    }
  }
};

//https://leetcode.com/problems/two-sum/description/