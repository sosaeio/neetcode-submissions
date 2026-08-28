class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0;
        for(int read = 1; read < nums.size(); ++read){
            if(nums[read] != nums[write]){
                nums[++write] = nums[read];
            }
        }
        return write + 1;
    }
};
/*
read is fast pointer
write is slow pointer
[1,1,2,3,4]
 s f        nums[f] != nums[s] fails so f moves and s stays
[1,1,2,3,4]
 s   f      nums[f] != passes so 

*/