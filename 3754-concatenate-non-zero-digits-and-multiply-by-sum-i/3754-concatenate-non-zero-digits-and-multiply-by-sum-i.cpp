class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> non_zero;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                non_zero.push_back(digit);
            }
            n = n / 10;
        }
        reverse(non_zero.begin(), non_zero.end());
        long long mul_value = 1;
        long long x = 0;
        for (int i = non_zero.size() - 1; i >= 0; --i) {
            x += non_zero[i] * mul_value;
            mul_value *= 10;
        }
        long long sum = 0;
        for(int n:non_zero){
            sum+=n;
        }

        return x*sum;
    }
};