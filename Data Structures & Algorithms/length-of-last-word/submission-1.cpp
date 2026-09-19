class Solution {
public:
    int lengthOfLastWord(string s) {
        int stringCount = 0;
        int flip = 0;
        int n = s.size();
        for(int i = n - 1; i >= 0; --i){
            if(s[i] == ' '){
                if(stringCount > 0){
                    return stringCount;
                }
                flip++;
                continue;
            }
            if(isalpha(s[i]) && flip >= 0){
                stringCount += 1;
            }
        }
        return stringCount;
    }
};