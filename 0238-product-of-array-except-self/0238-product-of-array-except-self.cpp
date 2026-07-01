class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> PrefixProduct(n);
        vector<int> SuffixProduct(n);

        PrefixProduct[0] =  1;

        for(int i=1;i<n;++i){
        PrefixProduct[i] = PrefixProduct[i-1] * nums[i-1];
        }
        SuffixProduct[n-1]=1;
        for(int i=n-2;i>=0;--i){
            SuffixProduct[i] = SuffixProduct[i+1]*nums[i+1];
        }

        for(int i=0;i<n;++i){
            nums[i]=SuffixProduct[i]*PrefixProduct[i];
        }

        return nums;


    }
};