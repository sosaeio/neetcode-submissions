class Solution {
 public:
  vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    int rightMax = -1;
    for(int i = n - 1; i >= 0; --i){
      result[i] = rightMax;
      rightMax = max(rightMax, arr[i]);
    }
    return result;
  }
};
/*
 0 1 2 3 4 5
[2,4,5,3,1,2]
 ^   ^       5 is max
[5,4,5,3,1,2]
   ^ ^       5 is max
[5,5,5,3,1,2]
     ^ ^     3 is max
[5,5,3,3,1,2]
       ^   ^ 2 is max
[5,5,3,2,1,2]
         ^ ^  2 is also max
[5,5,3,2,1,2]
           ^  will be -1
*/