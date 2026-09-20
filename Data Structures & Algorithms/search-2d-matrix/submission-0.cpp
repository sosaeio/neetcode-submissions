class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; ++i) {
      int lo = -1;
      int hi = col;
      while (lo + 1 < hi) {
        int mid = lo + ((hi - lo) >> 1);
        if (matrix[i][mid] >= target) {
          hi = mid;
        } else {
          lo = mid;
        }
        if (hi < col && (matrix[i][hi] == target)) return true;
      }
    }
    return false;
  }
};
