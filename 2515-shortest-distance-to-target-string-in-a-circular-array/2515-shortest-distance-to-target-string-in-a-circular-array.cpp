class Solution {
public:
    int closestTarget(vector<string>& words, string t, int s) {
        int n = words.size();
        for(int i=0; i<n;i++){
            int r= (s+i)%n;
            int l= (s-i+n)%n;
            if(words[r]==t||words[l]==t){
                return i;
            }
        }
        return -1;
    }
};