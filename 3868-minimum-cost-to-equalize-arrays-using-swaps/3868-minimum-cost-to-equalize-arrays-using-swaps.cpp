class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(auto i:nums1) mp[i]++;
        for(auto i:nums2) mp[i]--;

        int res=0;
        for(auto [i,j]:mp){
            if(j&1) return -1;
            else if(j>0) res+=(j/2);
        }
        return res;
    }
};