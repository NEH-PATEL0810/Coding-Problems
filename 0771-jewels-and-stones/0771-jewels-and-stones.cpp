class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        int count = 0;
        unordered_map<char,int> map;

        for(char c : stones){
            map[c]++;
        }
   
        for(int i=0;i<jewels.size();++i){
            if(map.count(jewels[i])) {
                count += map[jewels[i]];
            }
        }

        return count;

        
    }
};