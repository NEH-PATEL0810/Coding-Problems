class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod=1;
        int left=0;
        int cnt=0;

        if(k<=1) return 0;
        for(int right=0;right<nums.size();++right){
            prod *= nums[right];

            while(prod>=k){
               prod /= nums[left];
               left++;
            }

            if(left<=right && prod < k){
                cnt += (right-left+1);
            }
        }

        return cnt;
    }
};