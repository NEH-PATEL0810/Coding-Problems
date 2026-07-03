class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i = 0;
        while (i < arr.size() - 1) {
            int j = i + 1;
            while (j < arr.size()) {
                if (arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) {
                    return true;
                }
                j++;
            }
            i++;
        }
        return false;
    }
};