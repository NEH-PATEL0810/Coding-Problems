class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ConsecLength = 0;

        unordered_set<int> st(nums.begin(), nums.end());
        for (auto& n : nums) {
            st.insert(n);
        }

        if (st.empty())
            return 0;

        auto it = st.begin();

        for (int x : st) {
            if (!(st.count(x - 1))) {
                int len = 1;
                while (st.count(x + len)) {
                    len++;
                }
                ConsecLength = max(ConsecLength, len);
            }
        }

        return ConsecLength;
    }
};