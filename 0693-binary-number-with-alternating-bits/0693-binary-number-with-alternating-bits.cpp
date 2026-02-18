class Solution {
public:
    bool hasAlternatingBits(int n) {
        n ^= (n>>1);
        return (!(n & (n+1)));
    }
};