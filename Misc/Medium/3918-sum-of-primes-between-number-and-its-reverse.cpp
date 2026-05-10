class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int t=n,temp=n;
        int rev=0;
        while(temp){
            rev = rev*10+temp%10;
            temp/=10;
        }
        int low = min(t,rev),high = max(t,rev);
        vector<bool> pr(high+1,true);
        if(high>=0){
            pr[0]=false;
        }
        if(high>=1){
            pr[1]=false;
        }
        for(int i = 2; i*i<=high;i++){
            if(pr[i]){
                for(int j = i*i; j<=high ; j+=i){
                    pr[j] = false;
                }
            }
        }
        int s = 0;
        for(int i=low;i<=high;i++){
            if(pr[i]){
                s+=i;
            }
        }
        return s;
    }
};