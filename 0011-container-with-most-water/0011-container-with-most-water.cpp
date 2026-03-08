class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = INT_MIN;
        int low = 0, high = n - 1;
        while (low < high) {
            ans = max(ans, min(height[low], height[high]) * (high - low));
            (height[low] < height[high]) ? low++ : high--;
        }
        return ans;
    }
};