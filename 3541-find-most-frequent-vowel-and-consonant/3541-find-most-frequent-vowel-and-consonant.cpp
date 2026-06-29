class Solution {
public:
    int maxFreqSum(string s) {
        string vowel = "aeiou";
        unordered_map<char,int> v;
        unordered_map<char,int> c;

        for(char ch:s){
            if(vowel.find(ch) != string::npos){
                v[ch]++;
            }
            else{
                c[ch]++;
            }
        }
         
        int maxVF = 0;
        int maxCF = 0;

        for(auto &idx1 : v){
            if(idx1.second>maxVF){
                maxVF = idx1.second;
            }
        }
        for(auto &idx2 : c){
            if(idx2.second>maxCF){
                maxCF = idx2.second;
            }
        }
        
        return maxVF + maxCF;
    }
};