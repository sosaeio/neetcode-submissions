class Solution {
public:

    int lowerBound(vector<int>& nums, int& target){
        int lo = -1;
        int hi = nums.size();
        while(lo + 1 < hi){
            int mid = lo + ((hi - lo) >> 1);
            if(nums[mid] >= target){
                hi = mid;
            }else{
                lo = mid;
            }
        }
        return hi; // this is first index where we find target
    }

    int upperBound(vector<int>& nums, int& target){
        int lo = -1;
        int hi = nums.size();
        while(lo + 1 < hi){
            int mid = lo + ((hi - lo) >> 1);
            if(nums[mid] > target){
                hi = mid;
            }else{
                lo = mid;
            }
        }
        return lo; //this is last index where we find target
    }

    bool isMajorityElement(vector<int>& nums, int target) {
        // int count = 0;
        // for(int num : nums){
        //     if(num == target) count++;
        // }
        // return count > nums.size()/2;
        int upperBoundIndex = upperBound(nums, target);
        int lowerBoundIndex = lowerBound(nums, target);
        return (upperBoundIndex - lowerBoundIndex + 1) > (nums.size()/2);
    }
};
/*
find lower bound and upper bound
[2,4,5,5,5,5,5,6,6]
 F,F,T,T,T,T,T,T,T
*/
