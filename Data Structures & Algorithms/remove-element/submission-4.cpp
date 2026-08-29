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
inx [0,1,2,3,4,5,6,7]
num [0,1,2,2,3,0,4,2]

val = 2
0,1,2,2,3,0,4,2
^             ^ 
l             r no change for left
0,1,2,2,3,0,4,2
  l           r no change for left
0,1,2,2,3,0,4,2
    l         r both are 2 but keep left and drop r
0,1,4,2,3,0,2,2
    l       r   now swap r so left can take this value then l moves forward
0,1,4,0,3,2,2,2
      l   r     now move r down so left can take this value
0,1,4,0,3,2,2,2
        l r     moves are complete
*/