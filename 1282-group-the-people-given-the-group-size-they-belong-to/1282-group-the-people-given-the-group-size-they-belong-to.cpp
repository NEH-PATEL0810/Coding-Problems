class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> map;
        vector<vector<int>> ans;
        int n = groupSizes.size();
        for (int i = 0; i < n; ++i) {

            int sizes = groupSizes[i];
            map[sizes].push_back(i);

            if (map[sizes].size() == sizes) {
                ans.push_back(map[sizes]);
                map[sizes].clear();
            }
        }

        return ans;
    }
};