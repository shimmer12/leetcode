class Solution {
public:
    int minKBitFlips(vector<int>& nu, int k) {
        int c=0,res=0,n=nu.size();
        for(int i=0;i<n;i++){
            if(i>=k && nu[i-k]>1){
                c--;
                nu[i-k]-=2;

            }
            if(c%2==nu[i]){
                if(i+k>n)return -1;
                nu[i]+=2;
                c++;
                res++;
            }
           
        } return res;
    }
};
