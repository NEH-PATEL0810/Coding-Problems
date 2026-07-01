class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char,int> map;

    for(int m:magazine){
        map[m]++;
    }

    for(int i=0;i<ransomNote.size();++i){
        if(map[ransomNote[i]]>0){
            map[ransomNote[i]]--;
        }
        else{
            return false;
        }
    }

    return true;





    }
};