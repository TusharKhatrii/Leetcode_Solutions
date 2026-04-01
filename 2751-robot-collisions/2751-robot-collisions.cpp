class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> order(n);
        iota(order.begin(), order.end(), 0);
        sort(order.begin(), order.end(),
             [&](int a, int b) { return positions[a] < positions[b]; });

        vector<bool> isAlive(n, true);
        stack<int> s;

        for (auto idx : order) {
            if (directions[idx] == 'R') {
                s.push(idx);
            } else {
                while (!s.empty() && directions[s.top()] == 'R' && isAlive[idx]) {
                    int x = s.top();
                    if(healths[x]==healths[idx]){
                        isAlive[idx]=false;
                        isAlive[x]=false;
                        s.pop();
                    }
                    else if(healths[x]>healths[idx]){
                        isAlive[idx] = false;
                        healths[x]--;
                    }
                    else if(healths[x]<healths[idx]){
                        isAlive[x] = false;
                        healths[idx]--;
                        s.pop();
                    }
                }
            }
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(isAlive[i])
            res.push_back(healths[i]);
        }
        return res;
    }
};

