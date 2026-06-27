class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int> freq_mp;
        for(int n:nums) {
            freq_mp[n]++;
        }

        int ans = -1;
        if(freq_mp.count(1)){
            int one_count = freq_mp[1];
            ans = one_count % 2==1 ? one_count:one_count-1;
            freq_mp.erase(1);
        }

        for(auto &[num,count]:freq_mp){
            int res =0;
            long long x = num;
            while(freq_mp.count(x) && freq_mp[x]>1){
                res +=2;
                x *=x;
            }
            ans = max(ans,res+(freq_mp.count(x)?1:-1));
        }
        return max(ans,1);

    }
};