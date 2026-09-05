class Solution {
public:
    void sortColors(vector<int>& arr) {
       int cnt1=0;
       int cnt2=0;
       int cnt0=0;

       for(int n: arr){
        if(n==0) cnt0++;
        else if(n==1) cnt1++;
        else cnt2++;
       }

       int index = 0;

       while(cnt0--){
        arr[index++] = 0;
       }

       while(cnt1--){
        arr[index++] = 1;
       }

       while(cnt2--){
        arr[index++] = 2;
       }

       
    }
};