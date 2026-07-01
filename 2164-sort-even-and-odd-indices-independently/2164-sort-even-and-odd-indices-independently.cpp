class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> EvenIndice;
        vector<int> OddIndice;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                EvenIndice.push_back(nums[i]);
            } else {
                OddIndice.push_back(nums[i]);
            }
        }

        sort(OddIndice.begin(), OddIndice.end());
        reverse(OddIndice.begin(), OddIndice.end());

        sort(EvenIndice.begin(), EvenIndice.end());

        int Eindex = 0;
        int Oindex = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                nums[i] = EvenIndice[Eindex];
                Eindex++;
            } else {
                nums[i] = OddIndice[Oindex];
                Oindex++;
            }
        }

        return nums;
    }
};