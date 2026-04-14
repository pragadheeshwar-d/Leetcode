class Solution {
public:
    int calPoints(vector<string>& s) 
    {
        stack<int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == "+")
            {
                int top1 = st.top(); 
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else if(s[i] == "D")
            {
                st.push(st.top() * 2);
            }
            else if(s[i] == "C")
            {
                st.pop();
            }
            else
            {
                st.push(stoi(s[i]));
            }
        }
        int sum = 0;
        while(!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};