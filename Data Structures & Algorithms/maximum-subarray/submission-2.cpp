class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int curSum = 0;
        for(int num : nums){
            if(curSum < 0){
                curSum = 0;
            }
            curSum += num;
            maxSum = max(curSum, maxSum);
        }
        return maxSum;
    }
};
/*
maxSum = 2
    2 4  4 4 5  5 8
m2  2 
[2,-3,4,-2,2,1,-1,4]
c2 -1
    0 4  2 4 5  4 8
*/
