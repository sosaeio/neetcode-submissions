class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> mySet(nums.begin(), nums.end());
        return mySet.size() != nums.size();
    }
};