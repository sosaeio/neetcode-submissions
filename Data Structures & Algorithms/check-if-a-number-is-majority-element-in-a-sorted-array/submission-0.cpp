class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int count = 0;
        for(int num : nums){
            if(num == target) count++;
        }
        return count > nums.size()/2;
    }
};
