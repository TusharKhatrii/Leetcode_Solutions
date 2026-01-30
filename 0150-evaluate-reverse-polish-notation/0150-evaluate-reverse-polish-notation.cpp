class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int ans = 0;
        char op;
        for (string c : tokens) {
            s.push(c);
            if (s.top() == "+" || s.top() == "-" || s.top() == "*" ||
                s.top() == "/") {
                if (s.top() == "+")
                    op = '+';
                else if (s.top() == "-")
                    op = '-';
                else if (s.top() == "*")
                    op = '*';
                else if (s.top() == "/")
                    op = '/';
                s.pop();
                int y = stoi(s.top());
                s.pop();
                int x = stoi(s.top());
                s.pop();
                int res=0;
                switch (op) {
                case '+':
                    res = (x + y);
                    break;
                case '-':
                    res = (x - y);
                    break;
                case '*':
                    res = (x * y);
                    break;
                case '/':
                    res = (x / y);
                    break;
                }
                ans=res;
                s.push(to_string(ans));
            }
        }
        return stoi(s.top());
    }
};