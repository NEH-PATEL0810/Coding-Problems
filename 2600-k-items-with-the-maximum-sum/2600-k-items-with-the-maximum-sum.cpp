class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector<int> vec(numOnes + numZeros + numNegOnes);

        int maxi = INT_MIN;

        for (int i = 0; i < numOnes; ++i) {
            vec[i] = 1;
        }

        for (int i = numOnes; i < numOnes + numZeros; ++i) {
            vec[i] = 0;
        }

        for (int i = numOnes + numZeros; i < numOnes + numZeros + numNegOnes;
             ++i) {
            vec[i] = -1;
        }

        int left = 0;
        int sum = 0;

        for (int right = 0; right < vec.size(); ++right) {
            sum += vec[right];

            if (right - left + 1 > k) {
                sum -= vec[left];
                left++;
            }

            if (right - left + 1 == k) {
                maxi = max(maxi, sum);
            }
        }

        return maxi == INT_MIN ? 0: maxi;
    }
};