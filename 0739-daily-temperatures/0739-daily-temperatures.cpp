class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int> res(n,0);
        vector<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && temp[i] > temp[s.back()]){
                res[s.back()] = i - s.back();
                s.pop_back();
            }
            s.push_back(i);
        }
        return res;
    }
};