class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int currSum = nums[i] + nums[left] + nums[right];
                int currDiff = abs(currSum - target);
                int closetDiff = abs(closestSum - target);
                if(currDiff<closetDiff){
                    closestSum=currSum;
                }
                
                if(currSum<target){
                    left++;
                }
                else
                right--;


            }
        }
        return closestSum;
    }
};