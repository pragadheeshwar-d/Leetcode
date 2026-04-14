class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26,0);
        queue<pair<char,int>>q;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            q.push({s[i], i});
        }
        while(!q.empty()){
            auto [c,i] = q.front();
            if(freq[c-'a']==1){
                return i;
            }
            q.pop();
        }
        return -1;
    }
};