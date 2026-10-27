class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        int start = 0;
        for(int i = 0; i <= n; ++i){
          int count = (i == 0) ? 0 : res[i >> 1] + (i & 1);
          res.push_back(count);
        }
        return res;
    }
};
