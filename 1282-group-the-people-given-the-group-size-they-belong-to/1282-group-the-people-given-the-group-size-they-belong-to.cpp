class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> map;
        int n = groupSizes.size();
        for (int i = 0; i < n; ++i) {
            int key = groupSizes[i];
            // if (mp[groupSizes].size() == groupSizes)'
                map[key].push_back(i);
        }

        vector<vector<int>> ans;

        for (auto& idx : map) {
            int groupSize = idx.first;
            vector<int>& people = idx.second;

            for (int i = 0; i < people.size(); i += groupSize) {
                vector<int> group;

                for (int j = i; j < i + groupSize; ++j) {
                    group.push_back(people[j]);
                }
                ans.push_back(group);
            }
        }

        return ans;
    }
};