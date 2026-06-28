class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> words;
        string res = "";
        string substr="";

        for(char c: s){
            if(c==' '){
             words.push_back(substr);
             substr = "";
            }
            else{
                substr+=c;
            }
        }
        words.push_back(substr);


        for(int i=0;i<k;++i){
            res += words[i];
            if(i!=k-1){
                res += ' ';
            }
        }

        return res;
    }
};