bool isPalindrome(int x) {
    long int rev=0;
    int temp=x;
    while(x>0){
        int dig=x%10;
        rev=rev*10+dig;
        x/=10;
    }
    if(temp==rev){
        return true;
    }
    else{
        return false;
    }
}