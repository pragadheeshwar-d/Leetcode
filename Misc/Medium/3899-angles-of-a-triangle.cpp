class Solution {
public:
    vector<double> internalAngles(vector<int>& s) {
        double a=s[0],b=s[1],c=s[2];
        if(a+b<=c||a+c<=b||c+b<=a){
            return {};
        }
        auto safeAcos = [](double x) {
            if (x < -1.0) 
                x = -1.0;
            if (x > 1.0) 
                x = 1.0;
        return acos(x);
        };
        double A = safeAcos((b*b + c*c - a*a) / (2*b*c)) * 180.0 / M_PI;
        double B = safeAcos((a*a + c*c - b*b) / (2*a*c)) * 180.0 / M_PI;
        double C = 180.0 - A - B;
        vector<double> angles ={A,B,C};
        sort(angles.begin(), angles.end());
        return angles;
    }
};