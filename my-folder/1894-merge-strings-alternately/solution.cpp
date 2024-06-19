class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n=w1.size();
        int m=w2.size();
        string res="";
        int i=0;//j=0;
        while(i<n||i<m){
            if(i<n){
                res+=w1[i];
            }
            if(i<m){
res+=w2[i];
            }
            i++;
        }

return res;
    }
};
