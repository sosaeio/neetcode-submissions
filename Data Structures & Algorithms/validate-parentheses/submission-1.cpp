class Solution {
 public:
  bool isValid(string s) {
    int len = s.size();
    if (len % 2 != 0) return false;
    unordered_map<char, char> table{{')', '('}, {'}', '{'}, {']', '['}};
    stack<char> charStack;
    for(auto ch : s){
        if(table.contains(ch)){
            if(!charStack.empty() && charStack.top() == table[ch]){
                charStack.pop();
            }else{
                return false;
            }
        }else{
            charStack.push(ch);
        }
    }
    if(!charStack.empty()) return false;
    return true;
  }
};
