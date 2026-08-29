class Solution {
 public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int reset = 0;
    int count = 0;
    for(int num : nums){
        if(num == 1){
            reset += 1; //track if reset reduces since max gets count
        }else reset = 0;
        count = max(count, reset);
    }
    return count;
  }
};
/*
count = 0
reset = 0
[1,1,0,1,0,1,1,1,0,1,1]
count = 2 first 2 before 0
reset = 2 -> 0
count = 1 only 1 before 0
reset = 1 -> 0
count = 3
reset = 3 -> 0

// */