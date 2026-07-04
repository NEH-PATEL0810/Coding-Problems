class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> map;
        for (int n : arr) {
            map[n]++;
        }

        int lucky_number = -1;

        for (auto& it : map) {
            if (it.first == it.second && it.first > lucky_number) {
                lucky_number = it.first;
            }
        }

        return lucky_number;
    }
};