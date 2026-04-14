class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c,count=0;
        for (int num:nums) {
            if (count == 0) {
                c = num;
            }
            if(num==c){
                count++;
            }
            else{
                count--;
            }
        }
        return c;
    }
};