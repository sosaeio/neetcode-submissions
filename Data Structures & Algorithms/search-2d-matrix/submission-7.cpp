class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int n = rows*cols;
        int lo = -1;
        int hi = n;
        while(lo + 1 < hi){
          int mid = lo + ((hi - lo) >> 1);
          if(matrix[mid/cols][mid%cols] >= target){
            hi = mid;
          }else{
            lo = mid;
          }
        }
        return hi < n && matrix[hi/cols][hi%cols] == target;
    }
};
