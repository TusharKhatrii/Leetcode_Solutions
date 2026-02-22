class Solution {
public:
    string toBinary(int n) {
    if (n == 0) return "0";
    
    string r;
    while (n > 0) {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    reverse(r.begin(), r.end());
    return r;
}
    int binaryGap(int n) {
        string s=toBinary(n);
        int low=0,high=0;
        int ans=0;
        while(high<s.size()){
            int local_ans=0;
            if(s[high]=='1'){
                local_ans+=(high-low);
                ans=max(ans,local_ans);
                low=high;
            }
            high++;
        }
        return ans;
    }
};