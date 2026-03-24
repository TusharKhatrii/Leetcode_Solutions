class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0, res = INT_MAX, left = 0, right = 0;
        while (right < n) {
            sum += nums[right];
            while (sum >= target) {
                res = min(res, right - left + 1);
                sum -= nums[left++];
            }
            right++;
        }
        return (res == INT_MAX)? 0 : res;
    }
};