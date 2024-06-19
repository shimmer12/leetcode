class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
       int i=m-1,j=n-1,k=m+n-1;
       while(i>=0 && j>=0){
        if(n1[i]>n2[j]){
            //                             i     k         j
            //ele n1 >n2 last eles    [1,2,3,0,0,0]    2 5 6
            n1[k]=n1[i];
            //put ele big at end 
            i--;k--; 
        }
        else{
            n1[k]=n2[j];
            j--;k--;

        }}
        while(j>=0){
n1[k]=n2[j];
j--;k--;
        
       }
        
    }
};
