class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int length = nums.size();
        int validSubarrays=0;
        for(int i=0;i<length;++i){
            int freq=0;
            for(int j=i;j<length;++j){
                if(nums[j]==target) freq++;
                // int occurences = count(nums.begin()+i,nums.begin()+j+1,target);
                if(freq>(j-i+1)/2){
                    validSubarrays++;
                }
            }
        }
        return validSubarrays;
    }
};