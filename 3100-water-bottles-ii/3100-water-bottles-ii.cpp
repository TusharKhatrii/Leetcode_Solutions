class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptyBottles=numBottles;
        int bottlesDrunk=numBottles;
        int exchange=0;
        while(emptyBottles>=0 && numExchange<=emptyBottles){
            bottlesDrunk++;
            emptyBottles-=numExchange++;
            exchange++;
            if(numExchange>=emptyBottles){
                emptyBottles+=exchange;
                exchange=0;
            }
        }
        return bottlesDrunk;
    }
};