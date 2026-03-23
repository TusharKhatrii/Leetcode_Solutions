class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0, right = 0, maxF = 0, winLen = 0;
        int n = s.size();
        while (right < n) {
            freq[s[right] - 'A']++;
            maxF = max(maxF, freq[s[right]-'A']);
            if ((right - left + 1) - maxF > k) {
                freq[s[left]-'A']--;
                left++;
            }
            winLen = max(winLen, right - left + 1);
            right++;
        }
        return winLen;
    }
};