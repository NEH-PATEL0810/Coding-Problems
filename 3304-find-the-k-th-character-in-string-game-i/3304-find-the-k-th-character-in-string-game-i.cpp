class Solution {
public:
    char kthCharacter(int k) {
        string initial_wrd = "a";

        while (initial_wrd.size() < k) {
        string temp;
            for (char c : initial_wrd) {
                temp += 'a' + (c - 'a' + 1) % 26;
            }
            initial_wrd += temp;
        }


        return initial_wrd[k-1];
    }
};