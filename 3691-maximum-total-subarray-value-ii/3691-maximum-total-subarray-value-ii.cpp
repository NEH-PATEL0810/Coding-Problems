class SparseTable {
public:
    int n, LOG;
    vector<vector<int>> mx, mn;
    vector<int> lg;

    SparseTable(vector<int>& nums) {
        n = nums.size();
        LOG = 0;
        while ((1 << LOG) <= n) LOG++;

        mx.assign(LOG, vector<int>(n));
        mn.assign(LOG, vector<int>(n));

        for (int i = 0; i < n; i++) {
            mx[0][i] = nums[i];
            mn[0][i] = nums[i];
        }

        for (int j = 1; j < LOG; j++) {
            for (int i = 0; i + (1 << j) <= n; i++) {
                mx[j][i] = max(mx[j - 1][i],
                               mx[j - 1][i + (1 << (j - 1))]);

                mn[j][i] = min(mn[j - 1][i],
                               mn[j - 1][i + (1 << (j - 1))]);
            }
        }

        lg.assign(n + 1, 0);
        for (int i = 2; i <= n; i++)
            lg[i] = lg[i / 2] + 1;
    }

    int getMax(int l, int r) {
        int k = lg[r - l + 1];
        return max(mx[k][l], mx[k][r - (1 << k) + 1]);
    }

    int getMin(int l, int r) {
        int k = lg[r - l + 1];
        return min(mn[k][l], mn[k][r - (1 << k) + 1]);
    }

    long long value(int l, int r) {
        return 1LL * getMax(l, r) - getMin(l, r);
    }
};

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        int n = nums.size();

        SparseTable st(nums);

        using T = tuple<long long, int, int>;

        priority_queue<T> pq;

        for (int l = 0; l < n; l++) {
            pq.push({st.value(l, n - 1), l, n - 1});
        }

        long long ans = 0;

        while (k--) {

            auto [val, l, r] = pq.top();
            pq.pop();

            ans += val;

            if (r > l) {
                pq.push({st.value(l, r - 1), l, r - 1});
            }
        }

        return ans;
    }
};