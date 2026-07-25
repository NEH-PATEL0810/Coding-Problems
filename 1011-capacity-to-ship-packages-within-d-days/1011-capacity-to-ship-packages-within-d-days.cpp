class Solution {
public:
    int findCap(vector<int>& wt, int cap) {
        int days = 1;
        int load = 0;
        for (int i = 0; i < wt.size(); ++i) {
            if (load + wt[i] > cap) {
                days = days + 1;
                load = wt[i];
            } else {
                load += wt[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());

        int sum = 0;
        for (int w : weights) {
            sum += w;
        }
        int high = sum;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int numOfDays = findCap(weights, mid);
            if (numOfDays <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};