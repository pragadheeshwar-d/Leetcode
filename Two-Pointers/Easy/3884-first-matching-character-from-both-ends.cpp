class Solution {
public:
    int firstMatchingIndex(string s) {
        int index=-1;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==s[s.length()-i-1]){
                index=i;
                break;
            }
        }
        return index;
    }
};