class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0;
        int min_op = 0;
        int ans = INT_MAX;
        for(int right = 0;right<blocks.size();++right){
              if(blocks[right]=='W') min_op++;
              if(right-left+1>k){
                if(blocks[left]=='W') min_op--;
                left++;
              }

              if(right-left+1==k) {
                ans = min(min_op,ans);
              }
        }

        return ans;

    }
};