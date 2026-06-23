class Solution {
public:
string reverseW(string str,int start,int end){
    int i=start;
    int j=end-1;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}
    string reverseWords(string s) {
        // string result="";
        int i=0;
        int j=s.length()-1;
        int start = 0 ;
        int end = 0;

        while(i<=j){
           if(s[i]==' '){
            end = i;
            s=reverseW(s,start,end);
            start = end +1;
           } 
           i++;
        }
        s = reverseW(s,start,s.length());
        return s;

    }
};