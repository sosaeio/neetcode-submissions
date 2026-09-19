class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int peakIndex = 0;
        for(int i = 0; i < n - 1; ++i){
            if(nums[i] > nums[i+1]){
                return i;
            }
        }
        return n - 1;

    }
};

/*
[1,2,3,1]
max = INT_MIN
*/