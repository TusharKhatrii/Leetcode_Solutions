class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 1 &&( nums[i] == nums[i - 1] || nums[i] == nums[i - 2])) {
                continue;
            }
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    if(s.find(temp)==s.end())
                    s.insert(temp);
                    j++,k--;
                } else {
                    if (sum < 0) {
                        j++;

                    } else if (sum > 0) {
                        k--;
                    }
                }
            }
        }
        for(auto it:s){
            res.push_back(it);
        }
        return res;
    }
};
