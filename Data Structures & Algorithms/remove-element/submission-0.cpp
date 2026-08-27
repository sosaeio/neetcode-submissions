class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
/*
inx [0,1,2,3]
num [3,2,2,3]
l = 0
r = 3
while(l <= r)
*/