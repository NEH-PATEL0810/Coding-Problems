class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> words;
        string substr = "";
        string result = "";
        for (char c : title) {
            if (c == ' ') {
                words.push_back(substr);
                substr = "";
            }else{
            substr += c;
            }
        }
        words.push_back(substr);

        for (auto& s : words) {
            if (s.size() == 1 || s.size() == 2) {
                for (int i = 0; i < s.size(); ++i) {
                    s[i] = tolower(s[i]);
                }
            } else {
                s[0] = toupper(s[0]);
                for (int i = 1; i < s.size(); ++i) {
                    s[i] = tolower(s[i]);
                }
            }
        }

        for(int i=0;i<words.size();++i){
            result+=words[i];
            if(i!=words.size()-1){
                result += ' ';
            }
        }

        return result;
    }
};