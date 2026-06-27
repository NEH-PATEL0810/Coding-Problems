class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result_set;

        unordered_set<int> st;

        for (auto& n1 : nums1) {
            st.insert(n1);
        }

        for (auto& n2 : nums2) {
            if (st.count(n2)) {
                auto it = find(result_set.begin(), result_set.end(), n2);
                if (it == result_set.end()) {
                    result_set.push_back(n2);
                }
            }
            // st.insert(n2);
        }

        return result_set;
    }
};