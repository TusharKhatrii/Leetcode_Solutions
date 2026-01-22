class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        vector<int> res;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                res = {left + 1, right + 1};
                break;
            } else if (sum > target) {
                right--;
            } else
                left++;
        }
        return res;
    }
};