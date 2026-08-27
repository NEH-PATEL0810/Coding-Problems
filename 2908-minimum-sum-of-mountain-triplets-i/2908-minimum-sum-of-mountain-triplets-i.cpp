class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int answer = INT_MAX;

        int n = nums.size();
        for (int j = 1; j < n - 1; ++j) {
            int LeftMin = INT_MAX;
            int RightMin = INT_MAX;
            for (int i = 0; i < j; ++i) {
                LeftMin = min(LeftMin, nums[i]);
            }

            for (int k = j + 1; k < n; ++k) {
                RightMin = min(RightMin, nums[k]);
            }

            if (LeftMin < nums[j] && RightMin < nums[j]) {
                int sum = LeftMin + nums[j] + RightMin;
                answer = min(answer, sum);
            }
        }

        if(answer == INT_MAX){
            return -1;
        }

        return answer;
    }
};