class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        if (nums.empty()) return true;
    
    int min_odd = INT_MAX;
    for (int x : nums) {
        if (x % 2 == 1) {
            min_odd = min(min_odd, x);
        }
    }
    
    if (min_odd == INT_MAX) return true;
    
    for (int x : nums) {
        if (x % 2 == 0 && x < min_odd) {
            return false;
        }
    }
    
    return true;
    }
};