class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxFind = 0;
        int reset = 0;
        for (const auto& num : nums){
            if(num == 1){
                reset++;
                maxFind = max(reset, maxFind);
            }else{
                reset = 0;
            }
        }
        return maxFind;
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