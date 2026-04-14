class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& s) {
        queue<int>q;
        for(int s:students){
            q.push(s);
        }
        int i=0,count=0;
        while(!q.empty()&&count<=q.size()){
            if(q.front()==s[i]){
                q.pop();
                i++;
                count=0;
            }
            else{
                int t = q.front();
                q.pop();
                q.push(t);
                count++;
            }
        }
        return q.size();
    }
};