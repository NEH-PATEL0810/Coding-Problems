class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = 0;
        int n = timeSeries.size();
        for(int i=0;i<n-1;++i){
            sum += min(timeSeries[i+1]-timeSeries[i],duration);
        }

        return sum + duration;
    }
};