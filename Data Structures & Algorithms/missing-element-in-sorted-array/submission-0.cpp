class Solution {
 public:
  int missingElement(vector<int>& nums, int k) {
    int n = nums.size();
    int lo = -1;
    int hi = n;
    while (lo + 1 < hi) {
      int mid = lo + ((hi - lo) >> 1);
      int missing = (nums[mid] - nums[0]) - mid;
      if (missing < k) {
        lo = mid;
      } else {
        hi = mid;
      }
    }

    return nums[lo] + k - ((nums[lo] - nums[0]) - lo);
  }
};
