class Solution {
public:
    
    bool isVowel(char c){
        string vowel = "aeiou";
        return (vowel.find(tolower(c)) != string::npos);
    }
    string sortVowels(string s) {
        vector<char> vowels;

        for(char ch : s){
            if(isVowel(ch)){
                vowels.push_back(ch);
            }
        }

        sort(vowels.begin(),vowels.end());
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