class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;

        char res;
        for (char ch : s) {
            if (seen.count(ch)) {
                res = ch;
                break;
            } else {
                seen.insert(ch);
            }
        }
        return res;
    }
};