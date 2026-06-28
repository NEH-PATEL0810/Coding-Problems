class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sMap;
        unordered_map<char, char> tMap;

        for (int i = 0; i < s.size(); ++i) {
            sMap[s[i]] = t[i];
        }

        for (int i = 0; i < t.size(); ++i) {
            tMap[t[i]] = s[i];
        }

        for (int i = 0; i < s.size(); ++i) {
            if (sMap.count(s[i]) && sMap[s[i]] != t[i])
                return false;
            if (tMap.count(t[i]) && tMap[t[i]] != s[i])
                return false;
        }

        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        vector<string> result;
        for (int i = 0; i < words.size(); ++i) {
            if (isIsomorphic(words[i], pattern)) {
                result.push_back(words[i]);
            }
        }
        return result;
    }

};