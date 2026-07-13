class Solution {
public:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }

    int maxVowels(string s, int k) {
        int left = 0;
        int max_v = 0;
        int vowel = 0;

        for (int right = 0; right < s.size(); ++right) {

            if (isVowel(s[right])) {
                vowel++;
            }
            if (right - left + 1 > k) {
                if (isVowel(s[left])) {
                    vowel--;
                }
                left++;
            }
            if (right - left + 1 == k) {
                max_v = max(max_v, vowel);
            }
        }
        return max_v;
    }
};