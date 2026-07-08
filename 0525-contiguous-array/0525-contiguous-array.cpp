class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<long long, int> mp;
        long long prefix = 0;
        mp[0] = -1;
        int ans = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0)
                prefix--;
            else
                prefix++;
            
            if(mp.count(prefix)){
                ans = max(ans,i-mp[prefix]);
            }
            else{
                mp[prefix] = i;
            }
        }

        return ans;
    }
};