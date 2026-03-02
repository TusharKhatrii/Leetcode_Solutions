class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char c : s) {
            if (((int)c >= 97 and (int) c <= 122) or
                ((int)c >= 65 and (int) c <= 90) or
                ((int)c >= 48 and (int) c <= 57)) {
                str += tolower(c);
            }
        }
        int low = 0, high = str.size() - 1;
        while (low <= high) {
            if ((char)tolower(str[low++] != (char)tolower(str[high--]))) {
                return false;
            }
        }
        return true;
    }
};