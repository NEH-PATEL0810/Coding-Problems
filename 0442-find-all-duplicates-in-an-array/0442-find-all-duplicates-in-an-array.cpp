class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        int i=0;

        while(i<n){
            int correctIndex = nums[i]-1;
            if(nums[i]!=nums[correctIndex]){
                swap(nums[i],nums[correctIndex]);
            }
            else{
                i++;
            }
        }

        for(int i=0;i<n;++i){
            if(nums[i]!=i+1){
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};