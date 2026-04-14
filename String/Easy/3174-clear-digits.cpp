class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for (char c : s) {
            if (isdigit(c)) {
                if (!st.empty()) {
                    st.pop(); 
                }
            } 
            else {
                st.push(c);
            }
        }
        string result;
        while (!st.empty()) {
            result.insert(result.begin(), st.top());
            st.pop();
        }
        return result;
    }
};