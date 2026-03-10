class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            if(nums[low]<nums[high]){
                return nums[low];
            }
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1]) {
                return nums[mid+1];
            } else if (nums[low] < nums[mid]) {
                low = mid + 1;
            }
            else if(nums[mid]<nums[high]){
                high=mid;   
            }
        }
        return nums[low];
    }
};