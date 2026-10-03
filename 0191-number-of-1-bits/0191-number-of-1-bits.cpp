class Solution {
public:
    string Binary(int n) {
        string bin = "";

        while (n > 0) {
            bin += (n % 2) + '0';
            n = n / 2;
        }

        return bin;
    }
    int hammingWeight(int n) {

        string res = Binary(n);
        int ans = 0;

        for (char c : res) {
            if (c == '1')
                ans++;
        }

        return ans;
    }
};