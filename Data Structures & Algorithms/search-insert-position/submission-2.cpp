class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = -1;
        int hi = nums.size();
        while(lo + 1 != hi){
            int mid = lo + ((hi - lo) >> 1);
            if(nums[mid] >= target){
                hi = mid;
            }else{
                lo = mid;
            }
        }
        return hi;
    }
};
/*

[-1,0,2,4,6,8]
  0 1 2 3 4 5
[-1,0,2,4,x,6,8]
what number is the latest smaller than 5
index + 1
*/