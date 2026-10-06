class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi = INT_MIN;
        bool isAlphaNum;

        for (string w : strs) {
            bool is_Numeric = all_of(
                w.begin(), w.end(), [](unsigned char c) { return isdigit(c); });

            if (is_Numeric) {
                maxi = max(maxi, stoi(w));
            } else {
                maxi = max(maxi, (int)w.size());
            }
        }
        return maxi;
    }
};