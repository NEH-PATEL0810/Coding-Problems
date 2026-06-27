class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        for(int num:nums){
            if(freq[num]>=2) return true;
        }
        return false;
    }
};