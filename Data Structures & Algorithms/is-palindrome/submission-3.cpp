class Solution {
 public:
  bool isPalindrome(string s) {
    // using new string approach
    string sp = "";
    for(auto c : s){
      if(isalnum(c)){
        sp += tolower(c);
      }
    }
    return sp == string(sp.rbegin(), sp.rend());
  }
};
