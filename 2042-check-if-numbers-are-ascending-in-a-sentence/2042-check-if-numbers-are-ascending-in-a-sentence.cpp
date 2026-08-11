class Solution {
public:
    bool isSorted(vector<int>& arr ,int n){
        for(int i=1;i<n;++i){
            if(arr[i]<=arr[i-1])
            {
                return false;
            }
            
        }
        return true;
    }
    bool areNumbersAscending(string s) {
        vector<int> tokens;
        int num=0;
        bool flag = 0;
        for(char c:s){
            if(isdigit(c)){
                num = num*10 + (c-'0');
                flag = 1;
            }
            else{
                if(flag) 
                {
                    tokens.push_back(num);
                    num=0;
                    flag=0;
                }
            }
        }

        if(flag){
            tokens.push_back(num);
        }

        return isSorted(tokens,tokens.size());
    }
};