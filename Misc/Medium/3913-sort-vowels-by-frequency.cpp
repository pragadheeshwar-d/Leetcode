class Solution {
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
public:
    string sortVowels(string s) {
        vector<int> freq(26,0), first(26,-1);
        
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                freq[s[i]-'a']++;
                if(first[s[i]-'a']==-1)
                    first[s[i]-'a']=i;
            }
        }

        vector<pair<char,pair<int,int>>> v;

        for(char c : {'a','e','i','o','u'}){
            if(freq[c-'a']>0){
                v.push_back({c,{freq[c-'a'],first[c-'a']}});
            }
        }

        sort(v.begin(),v.end(),[](auto &a, auto &b){
            if(a.second.first!=b.second.first)
                return a.second.first>b.second.first;
            return a.second.second<b.second.second;
        });

        string vowels="";
        for(auto x:v){
            vowels += string(x.second.first,x.first);
        }

        int j=0;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                s[i]=vowels[j++];
            }
        }

        return s;
    }
};