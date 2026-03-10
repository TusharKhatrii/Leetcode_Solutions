class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (!(k & 1))
            return -1;
        int rem=0;
        for(int i=1;i<=k;i++){
            rem = ((10 * rem) + 1) % k;
            if(rem == 0){
                return i;
            }
        }
        return -1;
    }
};