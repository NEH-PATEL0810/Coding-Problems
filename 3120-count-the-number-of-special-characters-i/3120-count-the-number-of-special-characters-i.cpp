class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> st;
        int special = 0;

        for (char c : word) {
            st.insert(c);
        }

        for (char c1 : st) {
            if (islower(c1)) {
                if (st.count(c1 - 'a' + 'A')) {
                    special += 1;
                }
            }

        }

        return special;
    }
};