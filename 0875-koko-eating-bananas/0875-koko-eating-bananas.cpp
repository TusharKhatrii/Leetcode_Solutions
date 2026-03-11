class Solution {
    bool canFinish(int mid, const vector<int>& piles, int h) {
        int hours = 0;
        for (int pile : piles) {
            hours += (pile / mid);
            if (pile % mid != 0)
                hours++;
            }
        return (hours<=h);
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = -1;
        for (int i : piles) {
            if (max < i)
                max = i;
        }
        int low = 1, high = max;
        while (low < high) {
            int mid = low + ((high - low) >> 1);
            if (canFinish(mid, piles, h)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};