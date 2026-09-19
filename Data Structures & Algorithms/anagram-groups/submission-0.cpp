class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for(string& word : strs){
            string w = word;
            sort(w.begin(), w.end());
            groups[w].push_back(word);
        }
        vector<vector<string>> result;
        for(auto &[word, anagrams] : groups){
            result.push_back(anagrams);
        }
        return result;
    }
};
/*
sortedWord = act, word = act
sortedWord = opst, word = pots
sortedWord = opst, word = tops
sortedWord = act, word = cat
sortedWord = opst, word = stop
sortedWord = aht, word = hat
groups = {
            "opst": ["pots", "tops", "stop"], 
            "aht": ["hat"], 
            "act": ["act", "cat"]
        }
result = [
            ["pots", "tops", "stop"], 
            ["hat"], 
            ["act", "cat"]
        ]
*/
