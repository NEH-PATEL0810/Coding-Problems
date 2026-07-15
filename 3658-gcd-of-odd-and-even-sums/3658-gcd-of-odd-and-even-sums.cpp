class Solution {
public:

    int GCD (int a,int b){
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }

        }
        if(a==0) {
            return b;
        }

        return a;
    }

    int SumofEven(int num){
        return num*(num+1);
    }

    int SumofOdd(int num){
        return num*num;
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd =SumofOdd(n);
        int sumEven = SumofEven(n);

        return GCD(sumOdd,sumEven);

    }
};