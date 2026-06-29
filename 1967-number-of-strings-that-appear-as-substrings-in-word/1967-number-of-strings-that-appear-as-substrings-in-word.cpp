class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int substr=0;

        for(string s : patterns){
            if(word.find(s) != string::npos){
                substr +=1;
            }
        }

        return substr;
    }
};