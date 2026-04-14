class Solution {
public:
    int countCommas(int n) {
        long long c=0;

        if(n>=1000){
            c+=n-1000+1;
        }
        if(n>=1000000){
            c+=n-1000000+1;
        }if(n>=1000000000){
            c+=n-1000000000+1;
        }
        return c;
    }
};