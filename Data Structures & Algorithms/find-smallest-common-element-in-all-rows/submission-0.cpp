class Solution {
 public:
  int smallestCommonElement(vector<vector<int>>& mat) {
    int res = -1;
    unordered_map<int, int> hash;
    int rows = mat.size();
    int cols = mat[0].size();
    int n = rows * cols;
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        hash[mat[i][j]]++;
      }
    }
    for (auto& [val, freq] : hash) {
      if (freq == rows) res = val;
    }
    return res;
  }
};
