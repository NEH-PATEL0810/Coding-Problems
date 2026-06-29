class Solution {
public:
    bool isVowelString(string s){
        int i = 0;
        int j = s.size()-1;
        string v = "aeiou";
        bool first = v.find(s[i]) != string::npos;
        bool last = v.find(s[j]) != string::npos;

        return (first && last);

        
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i=left;i<=right;++i){
          if(isVowelString(words[i])) count++;
        }

        return count;
    }
};