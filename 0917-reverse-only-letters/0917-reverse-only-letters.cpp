class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> letters;
        for(char c:s){
            if(isalpha(c)){
                letters.push_back(c);
            }
        }
        reverse(letters.begin(),letters.end());
        int index=0;
        for(int i =0;i<s.size();++i){
            if(isalpha(s[i])){
                s[i]=letters[index];
                index++;
            }
        }
        return s;
    }
};