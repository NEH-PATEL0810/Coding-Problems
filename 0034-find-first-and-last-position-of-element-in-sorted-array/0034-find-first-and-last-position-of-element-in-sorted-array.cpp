class Solution {
public:
    int lowerBound(vector<int>& arr, int target, int n) {
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int UpperBound(vector<int>& arr, int target, int n) {
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums, target, nums.size());
        if (lb == nums.size() || nums[lb] != target)
            return {-1, -1};
        return {lb, UpperBound(nums, target, nums.size()) - 1};
    }
};