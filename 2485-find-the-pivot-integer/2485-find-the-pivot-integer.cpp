class Solution {
public:
    int pivotInteger(int n) {
        int leftSum = 1, rightSum = n, res = -1;
        int low = 2, high = n - 1;
        while (low <= high) {
            if (leftSum < rightSum) {
                leftSum += low;
                low++;
            } else if (rightSum < leftSum) {
                rightSum += high;
                high--;
            } else {
                leftSum += low;
                rightSum += high;
                low++;
                high--;
            }
        }
        if (leftSum == rightSum && low-high == 2) {
            res = high+1;
        }
        return res;
    }
};
