class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); ++i){
            int diff = target - nums[i];
            if(seen.contains(diff) && seen[diff] != i){
                return {seen[diff], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }

};
/*
USE HASH MAP
target = 7
[3,4,5,6]
 ^     ^
 ^   ^
 ^ ^
*/
