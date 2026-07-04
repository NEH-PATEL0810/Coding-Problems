class Solution {
public:
    int findTotalWords(string s) {
        vector<string> words;
        string substr = "";

        for (char c : s) {
            if (c == ' ') {
                words.push_back(substr);
            } else {
                substr += c;
            }
        }
        words.push_back(substr);

        return words.size();
    }
    int mostWordsFound(vector<string>& sentences) {

        int maxWords = 0;

        for(string s:sentences){
            if(findTotalWords(s)>maxWords){
                maxWords = findTotalWords(s);
            }
        }

        return maxWords;



    }
};