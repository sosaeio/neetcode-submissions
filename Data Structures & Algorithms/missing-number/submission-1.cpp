class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    sort(begin(nums), end(nums));
    int n = nums.size();
    if(nums[0] != 0) return 0;
    if(nums.back() != n) return n;
    for (int i = n - 1; i > 0; --i) {
      if (nums[i] - nums[i - 1] > 1) {
        return 1 + nums[i - 1];
      }
    }
    return 0;
  }
};
