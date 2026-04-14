class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(begin(robot), end(robot));
        sort(begin(factory), end(factory));
        vector<int> factoryPositions;
        for (auto& factory : factory) {
            for (int i = 0; i < factory[1]; i++) {
                factoryPositions.push_back(factory[0]);
            }
        }
        int robotCount = robot.size(), factoryCount = factoryPositions.size();
        vector<long long> next(factoryCount + 1, 0),current(factoryCount + 1, 0);

        current[factoryCount] = 1e12;
        for (int i = robotCount - 1; i >= 0; i--) {
            for (int j = factoryCount - 1; j >= 0; j--) {
                long long assign = abs(robot[i] - factoryPositions[j]) + next[j + 1];
                long long skip = current[j + 1];
                current[j] = min(assign, skip);
            }
            next = current;
        }
        return current[0];
    }
};