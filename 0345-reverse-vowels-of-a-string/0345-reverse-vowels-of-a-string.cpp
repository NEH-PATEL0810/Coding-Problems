class Solution {
public:
    bool isVowel(char c){
        string vowel = "aeiou";
        return (vowel.find(tolower(c)) != string::npos);
    }
    string reverseVowels(string s) {

        vector<int> vowels;

        for(char c:s){
            if(isVowel(c)){
                vowels.push_back(c);
            }
        }

        reverse(vowels.begin(),vowels.end());
        int index=0;

        for(int i=0;i<s.size();++i){
            if(isVowel(s[i])){
                s[i] = vowels[index];
                index++;
            }
        }

        return s;
        
    }
};