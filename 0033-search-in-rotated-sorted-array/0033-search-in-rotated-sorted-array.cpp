class Solution {
    int binarySearch(vector<int>& nums, int target, int low, int high) {
        while (low <= high) {
            int mid = low + ((high - low) >> 1);
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid-1;
            } else
                low = mid + 1;
        }
        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int mid = low + ((high - low) >> 1);
            if (nums[mid] < nums[high]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        int pivot = low,res=-1;
        high = nums.size() - 1;
        res = binarySearch(nums, target, 0, pivot - 1); // 0..pivot-1
        res = max(binarySearch(nums, target, pivot, high),res);     // pivot ... high
        return res;
    }
};