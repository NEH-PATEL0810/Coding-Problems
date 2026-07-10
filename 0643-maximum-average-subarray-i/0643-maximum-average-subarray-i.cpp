class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double average = INT_MIN;
        int l = 0;
        int sum = 0;

        for (int r = 0; r < nums.size(); ++r) {
            sum += nums[r];
            while (r - l + 1 > k) {
                sum -= nums[l];
                l++;
            }
            if (r - l + 1 == k) {
                average = max(average, (double)sum / k);
            }
        }
        return average;
    }
};