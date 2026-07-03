class Solution {
public:
    string replaceDigits(string s) {
        string res = "";

        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                int shift = s[i] - '0';

                char shift_ch = 'a' + (s[i - 1] - 'a' + shift) % 26;
                s[i] = shift_ch;
            }
        }

        return s;
    }
};