class Solution {
public:
    string greatestLetter(string s) {


        unordered_set<char> str;
        for (char c : s) {
            str.insert(c);
        }
        vector<char> validchar;

        for (int i = 0; i < s.size(); ++i) {
            if (islower(s[i])) {
                if (str.count(toupper(s[i]))) {
                    validchar.push_back(toupper(s[i]));
                }
            }
            if (isupper(s[i])) {
                if (str.count(tolower(s[i]))) {
                    validchar.push_back(toupper(s[i]));
                }
            }
        }

       char mx = 0;

       for(char c : validchar){
        mx = max(c,mx);
       }

       if(mx==0) return "";

        return string(1,mx);
    }
};