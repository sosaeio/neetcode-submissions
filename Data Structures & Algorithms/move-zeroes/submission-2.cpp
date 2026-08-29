class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        for(int read = 0; read < nums.size(); ++read){
            if(nums[read] != 0){
                // int temp = nums[read];
                // nums[read] = nums[write];
                // nums[write] = temp;
                // write++;
                swap(nums[write++], nums[read]);
            }
        }
    }
};
/*
[0,0,1,2,0,5] read = 0
 ^
 ^
[0,0,1,2,0,5] read = 1
 ^ ^
[0,0,1,2,0,5] read = 2
 ^   ^       swap write and read
[1,0,0,2,0,5] read = 3
   ^   ^     swap write and read
[1,2,0,0,0,5] read = 4
     ^   ^
[1,2,5,0,0,0] read = 5
     ^     ^ swap write and read
*/
