class Solution {
public:
    int pivotInteger(int n) {
        double sum = sqrt(n*(n+1)/2);
        int res = (int) sum;
        if(sum * sum == (n*(n+1)/2))
        return sum;
        return -1;
    }
};
