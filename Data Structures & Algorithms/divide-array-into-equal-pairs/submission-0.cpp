class Solution {
 public:
  bool divideArray(vector<int>& nums) {
    unordered_map<int, int> hash;
    for (int num : nums) {
      hash[num]++;
    }

    for (auto& [val, freq] : hash) {
      if (freq % 2 != 0) {
        return false;
      }
    }
    return true;
  }
};