class Solution {
public:
    // bool isVowel(char ch) {
    //     string vowel = "aeiou";
    //     return (vowel.find(ch) != string::npos);
    // }
    int vowelConsonantScore(string s) {
        s.erase(remove_if(s.begin(), s.end(),
                          [](unsigned char c) { return !isalpha(c); }),
                s.end());
        string v = "aeiou";
        int vowel = 0;
        int consonant = 0;

        for (char c:s){
            if(v.find(c) != string::npos){
                vowel +=1;
            }
            else{
                consonant+=1;
            }
        }

        if(consonant == 0){
            return 0;
        }

        return floor(vowel/consonant);
    }
};