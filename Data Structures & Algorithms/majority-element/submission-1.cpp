class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    unordered_map<int, int> hashMap;
    int maxNum = 0;
    int n = nums.size();
    for (int num : nums) {
      hashMap[num]++;
      if (hashMap[num] > n / 2) {
        maxNum = num;
      }
    }
    return maxNum;
  }
};