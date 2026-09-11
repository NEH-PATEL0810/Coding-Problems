class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string res="";

        for(int n:nums){
            res += to_string(n);
        }

        vector<int> ans;

        for(char s:res){
            ans.push_back((int)s - '0');

        }

        return ans;
    }
};