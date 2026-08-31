class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int curMax = 1;
        int curMin = 1;
        for(int num : nums){
            int temp = curMax * num;
            curMax = max({curMax * num, num, curMin * num});
            curMin = min({curMin * num, temp, num});
            maxProd = max(maxProd, curMax);
        }
        return maxProd;
    }
};
/*
m 2 2  8  8   8
 [2,4,-3, 5]
c   2  8 -24 
           1  5
reset -24 to 1 to keep it positive
*/
