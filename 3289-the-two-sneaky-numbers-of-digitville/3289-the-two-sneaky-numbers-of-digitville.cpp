class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        int i=0;
        while(i<n){
            int correctIndex = nums[i];
            if(nums[i]!=nums[correctIndex]){
                swap(nums[i],nums[correctIndex]);
            }
            else{
                i++;
            }
        }

        for(int i=0;i<n;++i){
            if(nums[i]!=i){
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};