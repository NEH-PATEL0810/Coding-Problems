class Solution {
public:
    string reverseByType(string s) {
        vector<char> letters;
        vector<char> special;

        for (char c : s) {
            if (isalpha(c)) {
                letters.push_back(c);
            } else {
                special.push_back(c);
            }
        }

        reverse(letters.begin(), letters.end());
        reverse(special.begin(), special.end());

        int lIndex = 0;
        int sIndex = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])) {
                s[i] = letters[lIndex];
                lIndex++;
            } 
            else {
                s[i] = special[sIndex];
                sIndex++;
            }
        }

        return s;
    }
};