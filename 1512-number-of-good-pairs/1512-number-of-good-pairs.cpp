class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans= 0;

        for(int n:nums){
            ans += mp[n];
            mp[n]++;
        }

        return ans;
    }
};