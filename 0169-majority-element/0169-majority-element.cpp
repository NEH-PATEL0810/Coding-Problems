class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq_map;
        for (int i = 0; i < n; ++i) {
            freq_map[nums[i]]++;
        }

        int m_element =0 ;

        for(auto &num:freq_map){
            if(num.second>ceil(n/2)) {
                m_element = num.first;
            }
        }

        return m_element;
    }
};