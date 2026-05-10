class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks,
                                     vector<string>& queries) {
        string s;
        for (auto& st : chunks) {
            s += st;
        }
        unordered_map<string, int> freq;
        string w;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') {
                w.push_back(ch);
            } else if (ch == '-') {
                if (!w.empty() && i + 1 < n && islower(s[i + 1])) {
                    w.push_back(ch);
                } else {
                    if (!w.empty()) {
                        freq[w]++;
                        w.clear();
                    }
                }
            } else {
                if (!w.empty()) {
                    freq[w]++;
                    w.clear();
                }
            }
        }
        if (!w.empty())
            freq[w]++;

        vector<int> ans;
        for (auto& q : queries) {
            ans.push_back(freq[q]);
        }
        return ans;
    }
};