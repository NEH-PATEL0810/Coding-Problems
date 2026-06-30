class Solution {
public:
    bool isVowel(char c) {
        string vowel = "aeiou";
        return (vowel.find(tolower(c)) != string::npos);
    }
    long long countVowels(string word) {
        long long cnt = 0;
        int n = word.size();
        for(int i=0;i<word.size();++i){
         if(isVowel(word[i])){
            cnt += 1LL*(i+1)*(n-i);
         }
        }
        return cnt;
    }
};