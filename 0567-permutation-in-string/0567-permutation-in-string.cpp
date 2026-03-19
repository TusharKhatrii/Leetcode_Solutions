class Solution {
    bool isEqual(vector<int> freq1, vector<int> freq2) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        bool ans = false;
        vector<int> freq1(26, 0);
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        int n = s2.size(), m = s1.size();
        for (int i = 0; i < n - m + 1; i++) {
            vector<int> freq2(26, 0);
            int l = i, r = i + m;
            while (l < r) {
                freq2[s2[l] - 'a']++;
                l++;
            }
            if (isEqual(freq1, freq2)) {
                ans = true;
                break;
            }
        }
        return ans;
    }
};