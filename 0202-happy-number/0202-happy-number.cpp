class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        int sum = 0;
        while (n > 0) {
            sum += ((n % 10) * (n % 10));
            n /= 10;
            if (n == 0) {
                if (s.find(sum) == s.end()) {
                    s.insert(sum);
                    n = sum;
                    sum = 0;
                } else
                    return (sum == 1);
            }
        }
        return false;
    }
};