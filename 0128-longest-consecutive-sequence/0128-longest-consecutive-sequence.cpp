class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int> s;
        for(int i:nums){
            s.insert(i);
        }

        int res=1;
        for(int i:s){
            if(s.find(i-1)==s.end()){
                int window = 1;
                while(s.find(i+window)!=s.end()){
                    window++;
                }
              res=max(res,window);
            }
        }
        return res;
    }
};