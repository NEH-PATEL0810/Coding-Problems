class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> stable(n);
        stable[0] = nums[0];

        for(int i=1;i<n;++i){
            stable[i] = max(nums[i],stable[i-1]);
        } 

        int minimum = INT_MAX;
        for(int i=n-1;i>=0;--i){
            minimum = min(minimum,nums[i]);
            stable[i] -= minimum;
        }

        for(int i=0;i<n;++i){
            if(stable[i]<=k) return i;
        }

        return -1;
              
    }
};