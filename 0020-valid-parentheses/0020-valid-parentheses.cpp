class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(char c:str){
            if(c=='(' || c=='[' || c=='{'){
                s.push(c);
            }
            else{
                if(s.empty()) return false;
                else if(c == ')'){
                    if(s.top()!='(')return false;
                }
               else if(c == ']'){
                    if(s.top()!='[')return false;
                }
                else if(c == '}'){
                    if(s.top()!='{')return false;
                }
                s.pop();
            }
        }
        return s.empty();
    }
};