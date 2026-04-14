class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string r;
        for(char c:s){
            if(c=='('){
                if(!st.empty()){
                    r+=c;
                }
                st.push(c);
            }
            else{
                st.pop();
                if(!st.empty()){
                    r+=c;
                }
                
            }
        }
        return r;
    }
};