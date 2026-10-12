class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> hashSet(arr.begin(), arr.end());
        int res = 0;
        int n = arr.size();
        for(int i=0; i < n; ++i){
          if(hashSet.contains(arr[i] + 1)){
            res++;
          }  
        }
        return res;
    }
};
