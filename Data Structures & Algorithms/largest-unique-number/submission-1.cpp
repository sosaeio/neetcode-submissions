class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
      map<int, int> hash;
      for(int num : nums){
        hash[num]++;
      }
      int maxNum = -1;
      for(auto& [num, freq]:hash){
        if(freq == 1){
            maxNum = max(num, maxNum);
        }
      }
      return maxNum;
    }
};
