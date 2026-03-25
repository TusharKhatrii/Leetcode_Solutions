class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for (int i : asteroids) {
            if (i > 0) {
                s.push(i);
            } else {
                while (!s.empty() && s.top() > 0 && s.top() + i < 0) {
                    s.pop();
                }
                if (s.empty() || s.top() < abs(i))
                    s.push(i);
                if (!s.empty() && s.top() + i == 0) {
                    s.pop();
                }
            }
        }
        vector<int> res;
        while (!s.empty()) {
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};