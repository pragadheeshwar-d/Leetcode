class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = 2*nums.size();
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            st.push(nums[i]);
        }
        for(int i=nums.size();i<n;i++){
            nums.push_back(st.top());
            st.pop();
        }
        return nums;
    }
};