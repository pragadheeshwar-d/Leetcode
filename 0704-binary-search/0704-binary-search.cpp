class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0,high=nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target<nums[mid]){
                high--;
            }
            else{
                low++;
            }
        }
        return -1;
    }
};