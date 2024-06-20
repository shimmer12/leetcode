class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int m=n.size();
        int s=1;
        for(int i=1;i<m;i++){
            if(n[i]!=n[i-1]){
                n[s++]=n[i];
            }

        }
        return s;
    }
};
