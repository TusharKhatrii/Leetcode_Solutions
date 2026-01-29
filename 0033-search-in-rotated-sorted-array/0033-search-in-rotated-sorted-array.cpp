class Solution {
public:
    void binarySearch(vector<int>& nums, int target, int left, int right,
                      int& ans) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                ans = mid;
                break;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    int search(vector<int>& nums, int target) {
        int ans = -1, n = nums.size(), pivot = -1;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = left + ((right - left) / 2);
            if ((nums[mid] > nums[right])) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        pivot = left;
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            binarySearch(nums, target, pivot, n - 1, ans);
        } else {
            binarySearch(nums, target, 0, pivot - 1, ans);
        }
        return ans;
    }
};
