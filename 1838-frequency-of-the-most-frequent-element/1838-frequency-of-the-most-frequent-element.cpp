class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long total = 0;
        long long L=0;
        long long R=0;
        long long res=0;
        while(R<nums.size()){
            total += nums[R];
            while(nums[R]*(R-L+1) > total + k){ //R-L+1 is thw window size
              total -= nums[L];
              L++;
            }
              res = max(res,R-L+1);
            R++;
        }

        return (int)res;
    }
};