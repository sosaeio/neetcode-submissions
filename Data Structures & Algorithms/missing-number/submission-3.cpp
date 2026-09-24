class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    unordered_set<int> hashSet(begin(nums), end(nums));
    int n = nums.size();
    for(int i = 0; i < n; ++i){
        if(!hashSet.contains(i)){
            return i;
        }
    }
    return n;
  }
};
