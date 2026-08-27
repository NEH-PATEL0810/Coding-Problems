class Solution {
public:
    int countKeyChanges(string s) {
        int i=0;
        int change = 0;

        for(int i=0;i<s.size();++i){
            s[i] = tolower(s[i]);
        }

        while(i<s.size()-1){
           if(s[i]!=s[i+1]){
            change++;
           }
           i++;
        }

        return change;
    }
};