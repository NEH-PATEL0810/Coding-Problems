class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // for(int i=0;i<numbers.size()-1;++i){
        //     for(int j=i+1;j<numbers.size();++j){
        //         if(numbers[i]+numbers[j]==target){
        //             return {i+1,j+1};
        //         }
        //     }
        // }

        // return {};

        unordered_map<int,int> mp;
        int n = numbers.size();

        for(int i=0;i<n;++i){
            int need = target - numbers[i];
            if(mp.count(need)){
                return {mp[need]+1,i+1};
            }
            mp[numbers[i]] = i;
        }
        return {};
    }
};