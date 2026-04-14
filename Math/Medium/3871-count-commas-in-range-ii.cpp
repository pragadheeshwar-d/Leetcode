class Solution {
public:
    long long countCommas(long long n) {
        long long c=0,d=1000;
        while(d<=n){
            c+=n-d+1;
            d*=1000;
        }
        return c;
    }
};