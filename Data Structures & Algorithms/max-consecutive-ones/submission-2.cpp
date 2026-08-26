class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int reset = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 1){
                reset++;
                count = max(count, reset);
            }else{
                reset = 0;
            }
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
*/