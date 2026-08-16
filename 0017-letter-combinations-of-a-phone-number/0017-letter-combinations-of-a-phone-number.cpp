class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,vector<char>> mp{
            {'2',{'a','b','c'}},
            {'3',{'d','e','f'}},
            {'4',{'g','h','i'}},
            {'5',{'j','k','l'}},
            {'6',{'m','n','o'}},
            {'7',{'p','q','r','s'}},
            {'8',{'t','u','v'}},
            {'9',{'w','x','y','z'}}
        };
   
        vector<string> ans;
        if(digits.empty()){
            return ans;
        }

        ans.push_back("");

        for(char d:digits)
        {
            vector<string> temp;

            for(string s:ans){
                for(char ch:mp[d]){
                    temp.push_back(s+ch);
                }
            }
            ans=temp;
        }
               

      return ans;
         

    }
};