class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        string result = "";
        for (int i = 0; i < n; ++i) {
            freq[s[i]]++;
        }

        vector<pair<char,int>> vec(freq.begin(), freq.end());

        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        // for(auto &it:vec){
        //     for(int i=0;i<it.second;++i){
        //         result += it.first;
        //     }
        // }

        for (auto& it : vec) {
            result.append(it.second, it.first);
        }
        return result;
    }
};