class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(!st.empty()&&s[i]==st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string r="";
        while(!st.empty()){
            r+=st.top();
            st.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};