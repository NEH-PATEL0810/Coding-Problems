class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, int> map;
        map[0]=1;
        long long prefix = 0;
        int ans = 0;
        for (int n : nums) {
            prefix += n;
            ans += map[prefix - k];
            map[prefix]++;
        }

        return ans;
    }
};