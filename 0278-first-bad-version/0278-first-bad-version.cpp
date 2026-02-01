// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans=0;
        int low=0,high=n;
        while(low<=high){
            int mid = low + ((high-low)/2);
            int target = isBadVersion(mid);
            if(target){
                ans=mid;
                high=mid-1;
            }
            else if(!target){
                low=mid+1;
            }
        }
        return ans;
    }
};