class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    int lo = -1;
    int hi = n;

    while (lo + 1 < hi) {
        int mid = lo + ((hi - lo) >> 1);
        if (nums[mid] <= nums[n - 1]) {
            hi = mid;
        } else {
            lo = mid;
        }
    }

    int pivot = hi;
    int start = 0;
    int end = pivot;

    if (target <= nums[n - 1]) {
        start = pivot;
        end = n;
    }

    lo = start - 1;
    hi = end;

    while (lo + 1 < hi) {
        int mid = lo + ((hi - lo) >> 1);
        if (nums[mid] >= target) {
            hi = mid;
        } else {
            lo = mid;
        }
    }

    return hi < end && nums[hi] == target ? hi : -1;
    }
};
