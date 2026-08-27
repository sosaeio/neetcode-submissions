class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        vector<int> result;
        while(l <= r){
            int ls = nums[l] * nums[l];
            int rs = nums[r] * nums[r];
            if(ls > rs){
                result.push_back(ls);
                l += 1;
            }else{
                result.push_back(rs);
                r -= 1;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};