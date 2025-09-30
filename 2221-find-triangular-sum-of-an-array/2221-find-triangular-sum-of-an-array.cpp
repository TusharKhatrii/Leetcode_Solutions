class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int s=nums.size();
        while(s>=1){
            for(int i=0;i<s-1;i++){
                nums[i]+=nums[i+1];
                nums[i]%=10;
            }
            s--;
        }
        return nums[s];
    }
};