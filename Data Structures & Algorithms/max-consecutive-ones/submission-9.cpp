class Solution {
 public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int best = 0;
    int counter = 0;
    for(int num : nums){
      if(num == 1){
        counter++;
      }else{
        best = max(best, counter);
        counter = 0;
      }
    }
    return max(best, counter);
  }
};
/*
counter = 0
reset = 0
[1,1,0,1,0,1,1,1,0,1,1]
counter = 2 first 2 before 0
reset = 2 -> 0
counter = 1 only 1 before 0
reset = 1 -> 0
counter = 3
reset = 3 -> 0

// */