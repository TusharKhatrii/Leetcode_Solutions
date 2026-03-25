class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int res = 0, left = 0, right = 0;
        unordered_map<int,int> mp;
        while (right < n) {
            mp[fruits[right]]++;
            while(mp.size()>2 ){
                mp[fruits[left]]--;
                if(mp[fruits[left++]]==0)
                mp.erase(fruits[left-1]);
            }
            res = max(res, right - left +1);
            right++;
        }
        return res;
    }
};