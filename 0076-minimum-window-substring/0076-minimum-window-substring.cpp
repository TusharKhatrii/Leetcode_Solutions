class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) {
            return "";
        }
        string res = "";
        vector<int> freq(128,0);
        for (char c : t) {
            freq[c]++;
        }

        int windowLength = t.size(),minWindow=INT_MAX;
        int left = 0, right = 0,start,ct=0;
        while (right < s.size()) {
            if(s[right]>0){
                ct++;
            }
            while(ct>=windowLength){
                start = left;
                if(s[left]>0){
                    ct--;
                }
                left++;
            }
            minWindow = min(minWindow,(right - left));
            right++;
        }

        int i=0;
        while(i<minWindow){
            res+=s[start++];
            i++;
        }
        return res;
    }
};