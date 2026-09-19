class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
       int n = nums.size();
       int l = 0;
       int r = n - 1;
       int maxSum = -1;
       sort(nums.begin(), nums.end());
       while(l < r){
        int sum = nums[l] + nums[r];
        if(sum < k){
            l++;
            maxSum = max(maxSum, sum);
        }else{
            r--;
        }
       }
       return maxSum == 0 ? -1 : maxSum;
    }
};
/*
just use two pointers
track left and right index
make sure they satisfy condition nums[i] + nums[j] = sum && sum < k
*/