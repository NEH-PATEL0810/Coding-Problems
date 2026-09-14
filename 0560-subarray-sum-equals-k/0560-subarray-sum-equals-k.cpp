class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0,prefix=0;
        unordered_map<int,int> prefixSumCount;

        prefixSumCount[0]=1;

        for(int i=0;i<nums.size();++i){
            prefix +=  nums[i];
            int remove = prefix-k;

            if(prefixSumCount.find(remove)!= prefixSumCount.end()){
                cnt += prefixSumCount[remove];
            }

            prefixSumCount[prefix]++;
        }

        return cnt;
        
        
    }
};