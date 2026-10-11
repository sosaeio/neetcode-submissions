class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lower = lowerBound(nums, target);
        if (lower == n || nums[lower] != target) return {-1, -1};
        int upper = upperBound(nums, target);
    return {lower, upper};
    }
    int lowerBound(vector<int>& nums, int target){
        int n = nums.size();
        int lo = -1;
        int hi = n;
        while(lo + 1 < hi){
            int mid = lo + ((hi - lo) >> 1);
            if(nums[mid] >= target){
                hi = mid;
            }else{
                lo = mid;
            }
        }
        return hi;
    }

    int upperBound(vector<int>& nums, int target){
        int n = nums.size();
        int lo = -1;
        int hi = n;
        while(lo + 1 < hi){
            int mid = lo + ((hi - lo) >> 1);
            if(nums[mid] > target){
                hi = mid;
            }else{
                lo = mid;
            }
        }
        return lo;
    }
};