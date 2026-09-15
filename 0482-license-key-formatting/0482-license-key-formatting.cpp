class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res="";
        for(char c:s){
            if(c=='-') continue;
            res+=c;
        }

        reverse(res.begin(),res.end());
        for(char &r:res){
            if(islower(r))
            {
                r=toupper(r);
            }
        }
        string ans ="";

        for(int i=0;i<res.size();++i){
            if(i%k==0){
                ans +='-';
            }
            ans += res[i];
        }

        reverse(ans.begin(),ans.end());

        return ans.substr(0,ans.size()-1);
    }
};