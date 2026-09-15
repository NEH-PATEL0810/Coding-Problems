class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;

        for(auto n:nums){
            elementSum+=n;
        }

        for(auto n:nums){
            while(n>0){
                digitSum += (n%10);
                n=n/10;
            }
        }

        return abs(elementSum - digitSum);
    }
};