class Solution {
public:
    string build(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '#') {
                if (!st.empty()) st.pop();
            } else {
                st.push(c);
            }
        }
   
        string result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};