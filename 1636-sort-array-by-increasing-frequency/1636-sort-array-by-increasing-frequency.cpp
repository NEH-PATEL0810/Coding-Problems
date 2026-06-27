class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> freq;
        for (int n : nums) {
            freq[n]++;
        }
        vector<pair<int, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            if(a.second ==  b.second){
                return a.first>b.first;
            }
            return (a.second < b.second);
        });

        for (auto& it : vec) {
    for (int i = 0; i < it.second; ++i) {
        result.push_back(it.first);
    }
}
return result;
    }
};