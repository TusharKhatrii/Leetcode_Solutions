class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26, 0);
        for (auto c : s) {
            freq[c - 'a']++;
        }

        int res = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0)
                continue;
            res++;
        }
        return res;
    }
};