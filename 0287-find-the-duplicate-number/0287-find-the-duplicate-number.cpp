class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> n(nums.size()+1,0);
        for(int i:nums){
            if(n[i])
            return i;

            n[i]=true;
        }
        return -1;
    }
};