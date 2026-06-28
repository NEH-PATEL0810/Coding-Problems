class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> pMap;
        unordered_map<string, char> sMap;
        string substr = "";

        vector<string> words;
        stringstream ss(s);
        string wrd;

        while(ss>>wrd){
            words.push_back(wrd);
        }

        // for (int i = 0; i < s.size(); ++i) {
        //     if (s[i] == ' ') {
        //         words.push_back(substr);
        //         substr = " ";
        //     }
        //     substr += s[i];
        // }
        // words.push_back(substr);
        if(pattern.size() != words.size()) return false;



        for (int i = 0; i < pattern.size(); ++i) {
            pMap[pattern[i]] = words[i];
        }
        for (int i = 0; i < words.size(); ++i) {
            sMap[words[i]] = pattern[i];
        }

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string w = words[i];
            if (pMap.count(c) && pMap[c] != w)
                return false;
            if (sMap.count(w) && sMap[w] != c)
                return false;
        }
        return true;
    }
};