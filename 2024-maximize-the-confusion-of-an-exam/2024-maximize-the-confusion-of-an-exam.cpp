class Solution {
public:
    
    int solve(string &s,int k,char target){
        int left = 0;
        int ans = 0;
        int changes = 0;
        for(int right = 0;right<s.size();++right){
            if(s[right]!=target) changes++;

            while(changes>k){
                if(s[left]!=target){
                    changes--;
                }
                left++;
            }

            ans  = max(ans,right-left+1);
        }
        return ans;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
       
       int makeAllT = solve(answerKey,k,'T');
       int makeAllF = solve(answerKey,k,'F');
       return max(makeAllT,makeAllF);
    }
};