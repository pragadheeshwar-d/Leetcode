double myPow(double x, int n) {
    long long a=n;
    if (a == 0) return 1.0;
    if (a < 0) {
        x=1/x;
        a=-a;
    }
    double r=1;

    while(a>0){
        if(a%2==1){
            r*=x;
        }
        x*=x;
        a/=2;
    }  
    return r;
}