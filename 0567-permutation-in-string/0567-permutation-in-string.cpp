class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> windowFreq(26, 0);
        vector<int> s1Freq(26, 0);

        for (char c : s1) {
            s1Freq[c - 'a']++;
        }
        int left = 0;

        for (int right = 0; right < s2.size(); ++right) {
            windowFreq[s2[right] - 'a']++;

            if (right - left + 1 > s1.size()) {
                windowFreq[s2[left] - 'a']--;
                left++;
            }

            if (right - left + 1 == s1.size()) {
                if (windowFreq == s1Freq) {
                    return true;
                }
            }
        }

        return false;
    }
};