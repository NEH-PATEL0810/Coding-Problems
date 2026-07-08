class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {

        long long total = 0;
        for (int n : nums) {
            total += n;
        }

        int rem = total % p;

        if (rem == 0)
            return 0;

        unordered_map<long long, int> mp;
        mp[0] = -1;
        long long prefix = 0;
        int res = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            prefix += nums[i];
            int curr = prefix % p;
            int need = (curr - rem + p) % p;

            if (mp.count(need)) {
                res = min(res, i - mp[need]);
            }

            mp[curr] = i;
        }
        return res == nums.size() ? -1 : res;
    }
};