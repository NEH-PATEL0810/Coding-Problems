class Solution {
public:
    vector<int> getRow(int row){
        vector<int> res;
        long long ans=1;
        res.push_back(ans);

        for(int i=1;i<=row;++i){
            ans = ans*(row-i+1)/i;
            res.push_back(ans);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascTri;

        for(int i=0;i<numRows;++i){
            pascTri.push_back(getRow(i));
        }

        return pascTri;
    }
};