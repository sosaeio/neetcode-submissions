class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
      int minNum = numeric_limits<int>::max();
      for(int num : nums){
        minNum = min(num, minNum);
      }
      if(minNum == numeric_limits<int>::max()) return 0;
      string num = to_string(minNum);
      int total = 0;
      for(char c : num){
        total += (c - '0');
      }
      return total % 2 == 0 ? 1 : 0;
    }
};
