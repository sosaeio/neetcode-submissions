class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int fast = 0; fast < nums.size(); ++fast){
            if(nums[fast] != 0){
                swap(nums[slow++], nums[fast]);
            }
        }
    }
};
/*
GAP WIDTH IS NUMBER OF ZEROS SO FAR
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
