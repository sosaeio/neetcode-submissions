class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            if(nums[l] == val){
                nums[l] = nums[r];
                r--;
            }else l++;
        }
        return l;
    }
};
/*
inx [0,1,2,3,4,5,6,7]
num [0,1,2,2,3,0,4,2]

val = 2
0,1,2,2,3,0,4,2
^             ^ 
l             r no change for left
0,1,2,2,3,0,4,2
  l           r no change for left
0,1,4,2,3,0,2,2
    l       r   now move r down so left can take this value
0,1,4,0,3,2,2,2
      l   r     now move r down so left can take this value
0,1,4,0,3,2,2,2
        l r     moves are complete
*/