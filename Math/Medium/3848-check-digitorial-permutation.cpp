class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int t=n;
        vector<int>f(10,1);
        int r=1;
        for(int i=2;i<=9;i++){
            f[i]=f[i-1]*i;
        }
        vector<int> digits; 
        int temp = n; 
        while (temp > 0) { 
            digits.push_back(temp % 10); 
            temp /= 10; 
        } 
        reverse(digits.begin(), digits.end());
        sort(digits.begin(), digits.end());
        do { 
            if (digits[0]==0) 
                continue;
            int num = 0; 
            for (int d : digits) { 
                num=num*10+d; 
            } 
            int sum = 0; 
            temp = num; 
            while (temp > 0) { 
                sum += f[temp % 10]; 
                temp /= 10; 
            } 
            if (sum == num) 
                return true; 
        } 
        while (next_permutation(digits.begin(), digits.end())); 
        return false;
    }
    
};