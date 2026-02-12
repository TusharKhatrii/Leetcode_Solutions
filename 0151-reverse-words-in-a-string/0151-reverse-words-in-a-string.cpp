class Solution {
public:
    string reverseString(string s) {
        int left = 0, right = s.size() - 1;
        while (left <= right) {
            swap(s[left++], s[right--]);
        }
        return s;
    }
    string reverseWords(string s) {
        string res = "";
        bool flag = true;
        string temp = "";
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == ' ' && flag) {
                continue;
            }

            if (s[i] == ' ') {
                res += reverseString(temp);
                res += ' ';
                temp = "";
                flag = true;
                continue;
            }
            temp += s[i];
            flag = false;
        }
        res += reverseString(temp);
        if(res[res.size()-1] == ' ')
        res.pop_back();
        return res;
    }
};