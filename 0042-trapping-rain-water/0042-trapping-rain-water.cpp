class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int highest = 0;
        for (int i = 0; i < n; i++) {
            if (height[i] > height[highest]) {
                highest = i;
            }
        }

        int trapWater = 0, max = 0;
        for (int i = 0; i < highest; i++) {
            if (max < height[i]) {
                max = height[i];
            } else {
                trapWater += (max - height[i]);
            }
        }
        max = 0;
        for (int i = n - 1; i > highest; i--) {
            if (max < height[i]) {
                max = height[i];
            } else {
                trapWater += (max - height[i]);
            }
        }
        return trapWater;
    }
};