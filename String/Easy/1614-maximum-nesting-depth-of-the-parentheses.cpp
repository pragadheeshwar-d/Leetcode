class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int d=0,m=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                d++;
                m = max(m,d);
            }
            else if(s[i]==')'){
                d--;
            }
        }
        return m;
    }
};