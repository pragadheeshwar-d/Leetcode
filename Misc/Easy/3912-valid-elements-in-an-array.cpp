class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums;

        vector<int> leftmax(n), rightmax(n);

        leftmax[0] = -1;
        for(int i = 1; i < n; i++) {
            leftmax[i] = max(leftmax[i-1], nums[i-1]);
        }

        rightmax[n-1] = -1;
        for(int i = n-2; i >= 0; i--) {
            rightmax[i] = max(rightmax[i+1], nums[i+1]);
        }

        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(i == 0 || i == n-1 || nums[i] > leftmax[i] || nums[i] > rightmax[i]) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};