class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long sum = 0;
        for (int s : shifts) {
            sum += s;
        }

        for (int i = 0; i < s.size(); ++i) {
            sum = (sum % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + sum) % 26;
            sum -= shifts[i];
        }

        return s;
    }
};