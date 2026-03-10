class Solution {
public:
    int pivotInteger(int n) {
        double sum = sqrt((n * (n + 1)) / 2);
        if ((int)sum * (int)sum == ((n * (n + 1)) / 2))
            return (int)sum;
        return -1;
    }
};
