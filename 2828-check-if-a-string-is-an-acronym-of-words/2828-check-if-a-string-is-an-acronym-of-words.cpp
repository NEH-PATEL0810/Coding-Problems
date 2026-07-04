class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        vector<char> first_char;
        for (string w : words) {
            first_char.push_back(w[0]);
        }
        if (s.size() != first_char.size())
            return false;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != first_char[i]) {
                return false;
            }
        }

        return true;
    }
};