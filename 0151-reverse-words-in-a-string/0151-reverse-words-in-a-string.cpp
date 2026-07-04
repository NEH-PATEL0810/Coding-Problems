class Solution {
public:
    string trim(const string& s) {
        size_t start = s.find_first_not_of(' ');
        if (start == string::npos) {
            return "";
        }
        size_t end = s.find_last_not_of(' ');
        return s.substr(start, end - start + 1);
    }
    string reverseWords(string s) {
        string str = trim(s);
        string res = "";
        vector<string> words;
        string substr = "";

        for (char c : str) {
            if (c == ' ') {
                if (!substr.empty()) {
                    words.push_back(substr);
                    substr.clear();
                }
            } else {
                substr += c;
            }
        }
        if (!substr.empty()) {
            words.push_back(substr);
        }

        reverse(words.begin(), words.end());



        for (int w = 0; w < words.size(); ++w) {

            res += words[w] + " ";
        }

        return trim(res);
    }
};