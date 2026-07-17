class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> peaks;
        int n = mountain.size();
        // if (n == 1)
        //     peaks.push_back(0);
        // if (mountain[0] > mountain[1])
        //     peaks.push_back(0);
        // if (mountain[n - 1] > mountain[n - 2])
        //     peaks.push_back(n - 1);

        int low = 1;
        int high = n - 2;
        // while(low<=high){
        //     int mid = low + (high-low)/2;
        //     if(mountain[mid]>mountain[mid+1] && mountain[mid]>mountain[mid-1]){
        //         peaks.push_back(mid);
        //     }
        //     if(mountain[mid]>mountain[mid-1]){
        //         low = mid+1;
        //     }
        //     else if(mountain[mid]>mountain[mid+1]){
        //         high = mid-1;
        //     }
        //     else{
        //         low = mid + 1;
        //     }
        // }4
        for(int i=low;i<=high;++i){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
                peaks.push_back(i);
            }
        }

        return peaks;
    }
};