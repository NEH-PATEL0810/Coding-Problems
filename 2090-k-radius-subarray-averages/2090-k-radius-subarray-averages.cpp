class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> result(nums.size(),-1);

        int windowSize = 2*k+1;

        if(windowSize>nums.size()){
            return result;
        }

        long long sum  =0;

        for(int i=0;i<windowSize;++i){
            sum+=nums[i];

        }

        for(int i=k;i<=nums.size()-k-1;++i){
            result[i] = sum/windowSize;

            if(i+k+1<nums.size()){
                sum-=nums[i-k];
                sum+=nums[i+k+1];
            }
        }

        return result;
    }
};