class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if (nums.size() < 3)
            return false;
        stack<int> st;
        vector<int> min_nums(nums.size());
        min_nums[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            min_nums[i] = min(min_nums[i - 1], nums[i]);
        }

        for (int j = nums.size() - 1; j >= 0; --j) {
            if (nums[j] > min_nums[j]) {
                while (!st.empty() && st.top() <= min_nums[j]) {
                    st.pop();
                }
                if (!st.empty() && st.top() < nums[j])
                    return true;
                st.push(nums[j]);
            }
        }
        return false;
    }
};