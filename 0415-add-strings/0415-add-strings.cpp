class Solution {
public:
    string addStrings(string num1, string num2) {
        string larger = (num1.size()>=num2.size())?num1:num2;
        string smaller = (num1.size()<num2.size())?num1:num2;
        string res(larger.size(), '0');

        int carry = 0, i = larger.size() - 1;
        for (int j = smaller.size() - 1; j >= 0; j--, i--) {
            int a = larger[i] - '0';
            int b = smaller[j] - '0';
            int sum = a + b + carry;
            res[i] = (sum % 10) + '0';
            // cout<<res[i]<<endl;
            carry = sum / 10;
        }

        while (i >= 0) {
            int sum = larger[i] - '0';
            sum += carry;
            carry = sum / 10;
            res[i--] = sum % 10 + '0';
        }
        if (carry == 1)
            res = '1' + res;
        return res;
    }
};
