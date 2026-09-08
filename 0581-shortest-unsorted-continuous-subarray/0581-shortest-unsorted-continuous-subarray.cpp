class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr(nums.size());
        for(int i=0;i<nums.size();++i){
            arr[i] = nums[i];
        }

        sort(arr.begin(),arr.end());

        int start = -1;
        int end = -1;

        // vector<int> index;

        for(int i=0;i<nums.size();++i){
            if(nums[i]!=arr[i]){
                 if(start==-1){
                    start=i;
                 }
                 end=i;
            }
        }

        if(start==-1){
            return 0;
        }

        return end-start+1;
    }
};