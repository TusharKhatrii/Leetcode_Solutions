class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        while (low <= high) {
            string s = to_string(low);
            int t = s.size();
            if (!t % 2)
                continue;
            if (t == 2) {
                if (s[0] == s[1])
                    res++;
            } else if (t == 4) {
                int x1 = s[0] - '0' + s[1] - '0';
                int y1 = s[2] - '0' + s[3] - '0';
                if (x1 == y1)
                    res++;
            }
            low++;
        }
        return res;
    }
};