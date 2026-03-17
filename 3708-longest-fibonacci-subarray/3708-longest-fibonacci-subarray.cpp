class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n<=2){
            return n;
        }
        int res=2,localMax=2;
        int num1=nums[0];
        int num2=nums[1];
        for(int i=2;i<n;i++){
            if(nums[i]==num1 + num2){
                res++;
            }
            else{
                localMax=max(localMax,res);
                res=2;
            }
            num1=num2;
            num2=nums[i];
        }
        return max(localMax,res);
    }
};