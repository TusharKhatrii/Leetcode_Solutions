class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
        long long leftSum = 0, rightSum = 0;

        while (l < n - 1 && nums[l] < nums[l + 1])
            leftSum += nums[l++];

        while (r > 0 && nums[r - 1] > nums[r])
            rightSum += nums[r--];

        if (r - l == 1 && nums[l] == nums[r]) {
            return abs(leftSum-rightSum);
        }
        else if (l == r) {
            long long a = abs((leftSum + nums[l]) - rightSum);
            long long b = abs(leftSum - (nums[l] + rightSum));
            return min(a, b);
        }
        return -1;
    }
};