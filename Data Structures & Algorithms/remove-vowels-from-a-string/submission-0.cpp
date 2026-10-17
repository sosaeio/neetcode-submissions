class Solution {
public:
    string removeVowels(string s) {
      string result = "";
      string vowels = "aeiou";
      for(char c : s){
        if(!vowels.contains(c)){
          result.push_back(c);
        }
      }
        return result;
    }
};
