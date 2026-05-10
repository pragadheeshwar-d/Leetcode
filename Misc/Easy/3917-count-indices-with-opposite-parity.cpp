class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size(),even=0,odd=0;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            ans[i]=(nums[i]%2)?even:odd;
            (nums[i]%2)?odd++:even++;
        }
        return ans;
    }
};