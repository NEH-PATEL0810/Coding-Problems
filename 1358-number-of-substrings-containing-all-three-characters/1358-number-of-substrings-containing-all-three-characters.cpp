class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        int right = 0;
        vector<int> str_Freq(3, 0);
        int total = 0;

        while (right < s.length()) {
            char curr = s[right];
            ++str_Freq[curr - 'a'];

            while (str_Freq[0] > 0 && str_Freq[1] > 0 && str_Freq[2] > 0) {
                total += s.length() - right;

                char leftchar = s[left];
                --str_Freq[leftchar - 'a'];
                ++left;
            }
            ++right;
        }

        return total;
    }
};