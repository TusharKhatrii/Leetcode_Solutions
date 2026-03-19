class Solution {
    bool allZero(vector<int> count){
        for(int i:count){
            if(i!=0)return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int> count(26, 0);
        int m=s1.size(),n=s2.size();
        for (char c : s1)
            count[c - 'a']++;

        for (int j = 0; j < m; j++)
            count[s2[j] - 'a']--;

        if (allZero(count))
            return true;

        for (int i = 1; i <= n - m; i++) {
            count[s2[i-1] - 'a']++;
            count[s2[i+m-1] - 'a']--;

            if (allZero(count))
                return true;
        }
        return false;
    }
};