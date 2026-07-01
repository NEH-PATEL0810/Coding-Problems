class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        vector<int> missing;
        sort(nums.begin(),nums.end());
        for (int i = min; i <= max; ++i) {
            if (!st.count(i)) {
                missing.push_back(i);
            }
        }
        sort(missing.begin(), missing.end());

        return missing;
    }
};