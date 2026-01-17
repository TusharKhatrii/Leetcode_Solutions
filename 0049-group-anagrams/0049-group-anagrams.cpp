class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> ans;
        for (int i = 0; i < strs.size(); i++) {
            vector<string> s;
            int freq1[26] = {0};
            for (int j = 0; j < strs[i].size(); j++) {
                freq1[strs[i][j] - 'a']++;
            }

            string key;
            for (int j : freq1) {
                key += to_string(j)+'$';
            }
            ans[key].push_back(strs[i]);
        }
        for (const auto& pair : ans) {
            res.push_back(pair.second);
        }
        return res;
    }
};