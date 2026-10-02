class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hashMap;
        for(int num : nums){
            hashMap[num]++;
        }
        int n = nums.size();
        int maxFreq = 0;
        for(auto &[val,freq]: hashMap){
            if(freq > n/2){
                maxFreq = val;
            }
        }
        return maxFreq;
    }
};