class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row * col;
        int lo = -1;
        int hi = n;
        while(lo + 1 < hi){
          int mid = lo + ((hi - lo) >> 1);
          int rowIndex = mid / col;
          int colIndex = mid % col;
          if(matrix[rowIndex][colIndex] >= target){
            hi = mid;
          }else{
            lo = mid;
          }
        }
        return hi < n && matrix[hi / col][hi%col] == target;
    }
};
