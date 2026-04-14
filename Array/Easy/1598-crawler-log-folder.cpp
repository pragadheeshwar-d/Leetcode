class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (string op : logs) {
            if (op == "../") {
                if (depth > 0) 
                    depth--;
            } else if (op == "./") {
                continue;
            } else { 
                depth++;
            }
    }
    return depth;
    }
};