class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count0 = 0;
        int count1 = 0;
        int ans = 0;

        int left = 0;

        for (int right = 0; right < s.size(); ++right) {
            if (s[right] == '0') {
                count0++;
            } else {
                count1++;
            }

            while (count1 > k && count0 > k) {
                if (s[left] == '0') {
                    count0--;
                } else {
                    count1--;
                }
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }
};