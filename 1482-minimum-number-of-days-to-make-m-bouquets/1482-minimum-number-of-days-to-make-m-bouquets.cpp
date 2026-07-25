class Solution {
public:
  
    bool isPossible(vector<int>& arr,int day,int m,int k){
        int n = arr.size();
        int cnt = 0;
        int bouquets = 0;
        for(int n:arr){
            if(n<=day){
                cnt++;
                if(cnt==k){
                    bouquets++;
                    cnt=0;
                }
            }
            else{
                cnt = 0;
            }
        }

        return bouquets>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL*k*m;

        if(total>bloomDay.size()) return -1;

        int minimum = *min_element(bloomDay.begin(),bloomDay.end());
        int maximum = *max_element(bloomDay.begin(),bloomDay.end());

        int low = minimum;
        int high = maximum;
        int result = -1;

        while(low<=high){
            int mid = low + (high-low)/2;;

            if(isPossible(bloomDay,mid,m,k)){
                result = mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return result;
    }
};