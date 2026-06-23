class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s.begin() + l, s.begin() + i);
                l = i + 1;
            }
        }
        return s;
    }
};