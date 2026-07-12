class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        unordered_map<int, int> rank;
        int currRank = 1;

        for (int x : temp) {
            if (!rank.count(x)) {
                rank[x] = currRank++;
            }
        }

        vector<int> res;
        res.reserve(arr.size());

        for (int x : arr) {
            res.push_back(rank[x]);
        }
        return res;
    }
};