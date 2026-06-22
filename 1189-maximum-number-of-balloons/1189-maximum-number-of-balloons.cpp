class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26,0);

        for(char ch:text){
            freq[ch-'a']++;
        }

        return min({freq[1],freq[0],freq[11]/2,freq[14]/2,freq[13]});
    }
};