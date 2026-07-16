class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size()-1;
        for(int i=num.size()-1;i>=0;--i){
            if(num[i]-'0'==0){
                num.erase(i,1);
                continue;
            }
            if(num[i]-'0'!=0){
                break;
            }
        }
        return num;
    }
};