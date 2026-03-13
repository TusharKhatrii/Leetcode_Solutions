class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(string word : strs) {

            string w = word; 
            sort(word.begin(), word.end());
            map[word].push_back(w);
        }

        vector<vector<string>> res;
        for(auto it:map){
            res.push_back(it.second);
        }
        return res;
    }
};