class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> res;
        int sum = 0;
        int count = 0;
        sort(nums.begin(), nums.end());
        for (int q : queries) {
            sum = 0;
            count = 0;
            for (int n : nums) {
                if (sum + n <= q) {
                    sum += n;
                    count++;
                } else {
                    break;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};