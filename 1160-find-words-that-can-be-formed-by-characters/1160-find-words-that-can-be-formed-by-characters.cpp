class Solution {
public:
    bool canForm(string wrd, string ch) {
        unordered_map<char, int> map;

        for (char c : ch) {
            map[c]++;
        }

        for(int i=0;i<wrd.size();++i){
            if(map[wrd[i]]>0){
                map[wrd[i]]--;
            }
            else{
                return false;
            }
        }

        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
         string res="";

         for(string s:words){
            if(canForm(s,chars)){
                res+=s;
            }
         }

         return res.size();


    }
};