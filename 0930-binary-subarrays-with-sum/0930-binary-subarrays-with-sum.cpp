class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<long long,int> map;
        map[0] = 1;
        long long prefix =0;
        int res =0;
        for(int n : nums){
            prefix += n;
            res += map[prefix-goal];
            map[prefix]++;
        }

        return res;
    }
};