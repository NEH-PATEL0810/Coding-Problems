class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<long long,int> map;
        map[0]=1;
        long long prefix = 0;
        int ans = 0;

        for(int n : nums){
            prefix+=n;
            int remainder = (prefix%k+k)%k;
            ans += map[remainder];
            map[remainder]++;
        }
        return ans;
    }
};