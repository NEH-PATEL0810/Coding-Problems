class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> res;

        unordered_map<int,int> map;

        for(auto &m:matches){
            map[m[1]]++;
        }

        vector<int> lost_once;

        for(auto &m:map){
            if(m.second==1){
                lost_once.push_back(m.first);
            }
        }



        vector<int> Noloss;
        unordered_set<int> seen;

        for(auto &x:matches){
            int winner = x[0];
            if(!map.count(winner) && !seen.count(winner)){
                Noloss.push_back(winner);
                seen.insert(winner);
            }
        }
        sort(Noloss.begin(),Noloss.end());
        sort(lost_once.begin(),lost_once.end());

        res.push_back(Noloss);
        res.push_back(lost_once);

        return res;


    }
};