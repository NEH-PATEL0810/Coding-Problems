class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1_diff = abs(x-z);
        int p2_diff = abs(y-z);
   
        if(p1_diff==p2_diff) return 0;
        // if(p1_diff<p2_diff) return 1;
        // else return 2;

    
    return p1_diff<p2_diff ? 1:2;
    }
};