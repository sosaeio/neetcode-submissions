class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    sort(begin(nums), end(nums));
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
      if (nums[i] != i) {
        return i;
      }
    }
    return n;
  }
};
