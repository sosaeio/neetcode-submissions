class Solution {
 public:
  bool isPalindrome(string s) {
    // using new string approach
    string sp = "";
    for(auto c : s){
      if(isalnum(c)){
        sp.push_back(tolower(c));
      }
    }
    string rev = sp;
    reverse(rev.begin(), rev.end());
    return sp == rev;
  }
};
