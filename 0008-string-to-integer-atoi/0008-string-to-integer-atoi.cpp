class Solution {
public:
    int myAtoi(string s) {
        stringstream ss(s);
        int x;
        ss>>x;
        return x;
    }
};