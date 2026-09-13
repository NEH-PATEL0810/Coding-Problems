class Solution {
public:

    long long pickGifts(vector<int>& gifts, int k) {
        long long Numgift=0;

        for(int i=0;i<k;++i){
            int mx = *max_element(gifts.begin(),gifts.end());
            for(int &g:gifts){
               if(g==mx){
                 g=floor(sqrt(g));
                 break;
               }
            }

        }

        for(int g:gifts){
            Numgift+=g;
        }



        return Numgift;
    }
};