class Solution {
    int getMax(vector<int> &freq){
        int ans = 0;
        for(int i:freq){
            ans = max(ans,i);
        }
        return ans;
    }
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0, right = 0, winLen = 0;
        int n = s.size();
        while (right < n) {
            freq[s[right] - 'A']++;
            if ((right - left + 1) - getMax(freq) > k) {
                freq[s[left]-'A']--;
                left++;
            }
            winLen = max(winLen, right - left + 1);
            right++;
        }
        return winLen;
    }
};