class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        // int x = nums[0];
        // for (int i = 1; i < nums.size(); ++i) {
        //     x |= nums[i];
        // }
        // string binary = bitset<16>(x).to_string();
        // int end = binary.size() - 1;

        // if (binary[end] - '0' == 0)
        //     return true;

        // return false;

        int evenCnt = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]%2==0){
                evenCnt++;
            }
        }

        if(evenCnt>=2) return true;

        return false;
    }
};