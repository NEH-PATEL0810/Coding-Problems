class Solution {
public:
    int longestContinuousSubstring(string s) {
        int left = 0;
        int res = 1;

        for (int right = 1; right < s.size(); ++right) {

            if (s[right] != s[right - 1] + 1) {
                left = right;
            }

            res = max(res, right - left + 1);
        }

        return res;
    }
};