class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>0){
            ans+=(numBottles/numExchange); 
            if(numBottles>numExchange)
            numBottles=numBottles/numExchange+(numBottles%numExchange); 
            else break;
        }
        return ans;
    }
};