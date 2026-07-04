class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int n:nums){
            map[n]++;
        }
        int n = nums.size();
        int middle = (n-1)/2;

        if(map[nums[middle]] == 1){
            return true;
        }

        return false;
    }
};