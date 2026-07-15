class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> index;
        vector<int> windowFreq(26, 0);
        vector<int> patternFreq(26, 0);
        for (char c : p) {
            patternFreq[c - 'a']++;
        }
        int left = 0;

        for (int right = 0; right < s.size(); ++right) {
            windowFreq[s[right] - 'a']++;

            if (right - left + 1 > p.size()) {
                windowFreq[s[left] - 'a']--;
                left++;
            }

            if (right - left + 1 == p.size()) {
                if (windowFreq == patternFreq) {
                    index.push_back(left);
                }
            }
        }

        return index;
    }
};