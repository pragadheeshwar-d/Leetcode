class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minI=-1,minc=INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize){
                if(capacity[i]<minc){
                    minc=capacity[i];
                    minI=i;
                }
            }
        }
        return minI;
    }
};