class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // int sum = 0;
        // int n = arr.size();
        // for (int i = 0; i < n; ++i) {
        //     sum += arr[i];
        // }
        // int i = 0;
        // while (i < (n - 2)) {
        //     int j = i;
        //     while (j <= (i + 2)) {
        //         sum += arr[j];
        //         j++;
        //     }
        //     i++;
        // }

        // return sum;
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            sum = sum + (((n - i) * (i + 1) + 1) / 2) * arr[i];
        }

        return sum;
    }
};