class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        while(lo <= hi){
            int mid = lo + ((hi - lo) >> 1);
            if(mid > 0 && nums[mid] < nums[mid - 1]){
                hi = mid - 1;
            }else if(mid < n - 1 && nums[mid] < nums[mid + 1]){
                lo = mid + 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};

/*
[1,2,3,1]
max = INT_MIN
*/