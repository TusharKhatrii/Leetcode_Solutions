class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0,left=0,right=0,res=0;
        while(right<n){
            if(nums[right]==0) count++;
            if(count>k){
                if(nums[left]==0) count--;
                left++;
            }
            res = max(res,right-left + 1);
            right++;
        }   
        return res;
    }
};