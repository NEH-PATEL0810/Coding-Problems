class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int a = *min_element(nums1.begin(),nums1.end());
        int b = *min_element(nums2.begin(),nums2.end());

        if(a>b) return -(a-b);

        return b-a;

    }
};