class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int val = x;
        long long num = 0;
        while (x > 0) {
            num = (num * 10) + (x % 10);
            x /= 10;
        }
        return (val == num);
    }
};