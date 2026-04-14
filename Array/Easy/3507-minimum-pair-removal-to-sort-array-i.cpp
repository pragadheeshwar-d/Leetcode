class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int c=0;
        while(nums.size()>1){
            int a = 1;
            int min = INT_MAX;
            int target = -1;
            for(int i = 0 ; i< nums.size() - 1;++i){
                int sum = nums[i]+nums[i+1];
                if(nums[i] > nums[i+1]){
                    a = 0;
                }
                if(sum<min){
                    min=sum;
                    target = i;
                }
            }
            if(a){
                break;
            }
            c++;
            nums[target] = min;
            nums.erase(nums.begin()+target+1);
        }
        return c;
    }
};