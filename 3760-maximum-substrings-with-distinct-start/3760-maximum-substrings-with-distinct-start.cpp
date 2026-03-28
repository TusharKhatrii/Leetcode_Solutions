class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26, 0);
        for (auto c : s) {
            freq[c - 'a']++;
        }

        int res = 0;
        for (auto i:freq) {
            if (i == 0)
                continue;
            res++;
        }
        return res;
    }
};