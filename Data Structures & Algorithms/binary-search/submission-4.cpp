class Solution {
public:
    int search(vector<int>& nums, int target) {
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
        return hi < n && nums[hi] == target ? hi : -1;
    }
};
