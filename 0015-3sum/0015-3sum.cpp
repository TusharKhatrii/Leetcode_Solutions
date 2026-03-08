class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i - 1] == nums[i])
                continue;
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    res.push_back(temp);
                    do {
                        j++;
                    } while (nums[j] == nums[j - 1] && j < k);
                    do {
                        k--;
                    } while (nums[k] == nums[k - 1] && j < k);
                } else {
                    if (sum < 0) {
                        j++;

                    } else if (sum > 0) {
                        k--;
                    }
                }
            }
        }
        return res;
    }
};
