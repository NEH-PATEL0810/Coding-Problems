class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int n : nums) {
            if (n > 0) {
                pos.push_back(n);
            } else {
                neg.push_back(n);
            }
        }
        int pIndex = 0;
        int nIndex = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0) {
                nums[i] = pos[pIndex];
                pIndex++;
            }
            else{
                nums[i] = neg[nIndex];
                nIndex++;
            }
        }


        return nums;
    }
};