class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        if(num==0){
            return false;
        }
        long long n=1;
        while (n <= num / 2) {
            if (n * n == num) {
                return true;
            }
            n++;
        }
        return false;
    }
};