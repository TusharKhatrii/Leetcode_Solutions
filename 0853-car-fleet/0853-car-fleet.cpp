class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> s;
        vector<pair<int, int>> vehicles;
        int n = position.size();
        for (int i = 0; i < n; i++) {
            vehicles.push_back({position[i], speed[i]});
        }
        sort(vehicles.begin(), vehicles.end());
        for (int i = n - 1; i >= 0; i--) {
            double timeTaken =(double)(target - vehicles[i].first) / vehicles[i].second;
            if (!s.empty() && s.top() >= timeTaken) {
                s.pop();
            }
            s.push(timeTaken);
        }
        return s.size();
    }
};