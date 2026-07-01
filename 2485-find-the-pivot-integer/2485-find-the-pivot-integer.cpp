class Solution {
public:
    int pivotInteger(int n) {
        vector<int> num;
        for(int i=0;i<n;++i){
            num.push_back(i+1);
        }
        int nm = num.size();
        
        vector<int> leftSum(nm);
        vector<int> rightSum(nm);
  
        leftSum[0]=0;
        for(int i=1;i<nm;++i){
            leftSum[i] = leftSum[i-1] + num[i-1];
        }

        rightSum[nm-1] = 0;
        for(int j=n-2;j>=0;--j){
            rightSum[j] = rightSum[j+1] + num[j+1];
        }

        for(int k=0;k<nm;++k){
            if(leftSum[k]==rightSum[k]) return num[k];
        }

        return -1;
        
    }
};