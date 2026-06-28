class Solution {
public:
    bool detectCapitalUse(string word) {

        int n = word.size();
        int isUp = 0;
        int isLow = 0;
        bool first = 0;

        for (char c : word) {
            if (isupper(c))
                isUp += 1;
        }

        for (char c : word) {
            if (islower(c))
                isLow += 1;
        }

        if (isupper(word[0]))
            first = 1;

        return (isUp == n || isLow == n || (isupper(word[0]) && isUp == 1));
    }
};