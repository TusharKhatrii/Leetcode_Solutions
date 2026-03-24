class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> s;
        int n = temp.size();
        vector<int> res(n, 0);
        for (int i = 0; i < n; i++) {
            while (!s.empty() && temp[s.top()] < temp[i]) {
                res[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};