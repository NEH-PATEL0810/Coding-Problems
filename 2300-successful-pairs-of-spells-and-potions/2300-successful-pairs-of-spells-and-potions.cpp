class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        sort(potions.begin(), potions.end());
        vector<int> res;

        for (int sp : spells) {
            long long required = (success + sp - 1) / sp;
            auto it = lower_bound(potions.begin(), potions.end(), required);
            int count = potions.end() - it;
            res.push_back(count);
        }

        return res;
    }
};