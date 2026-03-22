class Solution {
    bool ifZero(unordered_map<char, int>& count1,
                unordered_map<char, int>& count2) {
        for (const auto& [key, val] : count1) {
            auto it = count2.find(key);
            if (it == count2.end() || it->second < val) {
                return false;
            }
        }
        return true;
    }

public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) {
            return "";
        }
        string res = "";
        unordered_map<char, int> count1;
        unordered_map<char, int> count2;
        for (char c : t) {
            count1[c]++;
        }

        int windowLength = INT_MAX;
        int left = 0, right = 0, start, end, old = INT_MAX;
        while (right < s.size()) {
            if (count1.find(s[right]) != count1.end()) {
                count2[s[right]]++;
                while (ifZero(count1, count2)) {
                    old = windowLength;
                    windowLength = min(windowLength, right - left);
                    if (count2[s[left]] > 0)
                        count2[s[left]]--;
                    left++;
                    if (old > windowLength) {
                        start = left - 1;
                        end = right;
                    }
                }
            }
            right++;
        }
        while (start <= end && end < s.size()) {
            res += s[start];
            start++;
        }
        return res;
    }
};