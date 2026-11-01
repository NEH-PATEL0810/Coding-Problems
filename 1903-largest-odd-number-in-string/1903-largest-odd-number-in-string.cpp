class Solution {
public:
    string largestOddNumber(string num) {
        int ind=-1;
        for(int i=num.size();i>=0;--i){
            if((num[i]-'0')%2 == 1){
                ind = i;
                break;
            }
        }
        
        if(ind==-1) return "";
        int start = 0;
        while(start<=ind && num[start]=='0'){
            start++;
        }

        return num.substr(start,ind-start+1);
    }
};